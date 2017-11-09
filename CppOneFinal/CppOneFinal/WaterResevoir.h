#pragma once
class WaterResevoir {
	int WaterOzCount;
	void fill_resevoir(int ozCount);
public:
	int CheckWaterOzCount();
	void FillResevoir(int ozCount) {
		fill_resevoir(ozCount);
		if (this->on_resevoir_filled != nullptr) {
			this->on_resevoir_filled();
		}
	}
	void(*on_resevoir_filled)();
};