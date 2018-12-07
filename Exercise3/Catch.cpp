#ifndef TESTCATCH
#define  CATCH_CONFIG_MAIN // This tells Catch to provide a main() - only do this in one cpp file
#include "Catch.h"
#include "Bandpass.h"

TEST_CASE("BandpassTest") {

	double c1, c2, l1;
	double low;
	double high;
	
	c1 = 0.1;
	c2 = 0.01;
	l1 = 0.1;
	BandPass bandpass(c1, c2, l1);
	low = bandpass.getLow();
	high = bandpass.getHigh();
	
	
	REQUIRE(low > 0.4);
	REQUIRE(low < 0.5);
	REQUIRE(high > 5.4);
	REQUIRE(high < 5.6);


	SECTION("BandpassTest") {
		c1 = 3;
		c2 = 2;
		l1 = 4;
		BandPass bandpass(c1, c2, l1);
		low = bandpass.getLow();
		high = bandpass.getHigh();
	
	
		REQUIRE(low > 0.01);
		REQUIRE(low < 0.05);
		REQUIRE(high > 0.05);
		REQUIRE(high < 0.10);
	}
	SECTION("BandpassTest") {
		c1 = 0.7;
		c2 = 0.5;
		l1 = 0.2;
		BandPass bandpass(c1, c2, l1);
		low = bandpass.getLow();
		high = bandpass.getHigh();
	
	
		REQUIRE(low > 0.20);
		REQUIRE(low < 0.30);
		REQUIRE(high > 0.70);
		REQUIRE(high < 0.80);
	}
	
}
#endif TESTCATCH