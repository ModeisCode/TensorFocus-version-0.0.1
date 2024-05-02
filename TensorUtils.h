#pragma once

typedef struct Size {
	int x;
	int y;

	bool operator==(const Size& other) const {
		if (this->x == other.x && this->y == other.y)
			return true;
		else
			return false;
	}
}Size;







