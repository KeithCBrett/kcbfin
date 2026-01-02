#include <gtest/gtest.h>


#include "action.h"


TEST (DisplaySynopsisTest, ActionTests) {
	EXPECT_EQ(0, action::DisplaySynopsis ());
}
