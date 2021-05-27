#pragma once
class Monitor
{
public:
	void setDiagonal(float diagonal);
	float getDiagonal();
	void setMaximalRefreshDate(int maximalRefreshDate);
	int getMaximalRefreshDate();

	Monitor() : diagonal{ 0 }, maximalRefreshDate{ 0 } {}
	~Monitor();
private:
	float diagonal;
	int maximalRefreshDate;
};

