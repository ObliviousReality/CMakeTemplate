#include "gtest/gtest.h"

#include "sample_component/sample_component.hpp"

#include <string>

using TestSampleComponent = ::testing::Test;

TEST_F(TestSampleComponent, exampleTest)
{
    SampleComponent sc;
    EXPECT_EQ("Hello, World!", sc.getText());
}
