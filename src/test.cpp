#include <gtest/gtest.h>
#include <flatbuffers/flatbuffers.h>
#include <kaspar/book_generated.h>
#include <kaspar/collection_generated.h>

TEST(Tutorial, Case1) {
  flatbuffers::FlatBufferBuilder builder(1024);
}

int main(int argc, char* argv[]) {
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
