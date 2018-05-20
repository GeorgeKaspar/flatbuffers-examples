// automatically generated by the FlatBuffers compiler, do not modify


#ifndef FLATBUFFERS_GENERATED_BOOK_KASPAR_H_
#define FLATBUFFERS_GENERATED_BOOK_KASPAR_H_

#include "flatbuffers/flatbuffers.h"

namespace kaspar {

struct Info;

struct Book;

struct Info FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  enum {
    VT_SMTH = 4
  };
  const flatbuffers::Vector<int8_t> *smth() const {
    return GetPointer<const flatbuffers::Vector<int8_t> *>(VT_SMTH);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyOffset(verifier, VT_SMTH) &&
           verifier.Verify(smth()) &&
           verifier.EndTable();
  }
};

struct InfoBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_smth(flatbuffers::Offset<flatbuffers::Vector<int8_t>> smth) {
    fbb_.AddOffset(Info::VT_SMTH, smth);
  }
  explicit InfoBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  InfoBuilder &operator=(const InfoBuilder &);
  flatbuffers::Offset<Info> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<Info>(end);
    return o;
  }
};

inline flatbuffers::Offset<Info> CreateInfo(
    flatbuffers::FlatBufferBuilder &_fbb,
    flatbuffers::Offset<flatbuffers::Vector<int8_t>> smth = 0) {
  InfoBuilder builder_(_fbb);
  builder_.add_smth(smth);
  return builder_.Finish();
}

inline flatbuffers::Offset<Info> CreateInfoDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    const std::vector<int8_t> *smth = nullptr) {
  return kaspar::CreateInfo(
      _fbb,
      smth ? _fbb.CreateVector<int8_t>(*smth) : 0);
}

struct Book FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  enum {
    VT_NAME = 4,
    VT_AUTHOR = 6,
    VT_RATING = 8,
    VT_INFO = 10
  };
  const flatbuffers::String *name() const {
    return GetPointer<const flatbuffers::String *>(VT_NAME);
  }
  const flatbuffers::String *author() const {
    return GetPointer<const flatbuffers::String *>(VT_AUTHOR);
  }
  float rating() const {
    return GetField<float>(VT_RATING, 0.0f);
  }
  const Info *info() const {
    return GetPointer<const Info *>(VT_INFO);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyOffset(verifier, VT_NAME) &&
           verifier.Verify(name()) &&
           VerifyOffset(verifier, VT_AUTHOR) &&
           verifier.Verify(author()) &&
           VerifyField<float>(verifier, VT_RATING) &&
           VerifyOffset(verifier, VT_INFO) &&
           verifier.VerifyTable(info()) &&
           verifier.EndTable();
  }
};

struct BookBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_name(flatbuffers::Offset<flatbuffers::String> name) {
    fbb_.AddOffset(Book::VT_NAME, name);
  }
  void add_author(flatbuffers::Offset<flatbuffers::String> author) {
    fbb_.AddOffset(Book::VT_AUTHOR, author);
  }
  void add_rating(float rating) {
    fbb_.AddElement<float>(Book::VT_RATING, rating, 0.0f);
  }
  void add_info(flatbuffers::Offset<Info> info) {
    fbb_.AddOffset(Book::VT_INFO, info);
  }
  explicit BookBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  BookBuilder &operator=(const BookBuilder &);
  flatbuffers::Offset<Book> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<Book>(end);
    return o;
  }
};

inline flatbuffers::Offset<Book> CreateBook(
    flatbuffers::FlatBufferBuilder &_fbb,
    flatbuffers::Offset<flatbuffers::String> name = 0,
    flatbuffers::Offset<flatbuffers::String> author = 0,
    float rating = 0.0f,
    flatbuffers::Offset<Info> info = 0) {
  BookBuilder builder_(_fbb);
  builder_.add_info(info);
  builder_.add_rating(rating);
  builder_.add_author(author);
  builder_.add_name(name);
  return builder_.Finish();
}

inline flatbuffers::Offset<Book> CreateBookDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    const char *name = nullptr,
    const char *author = nullptr,
    float rating = 0.0f,
    flatbuffers::Offset<Info> info = 0) {
  return kaspar::CreateBook(
      _fbb,
      name ? _fbb.CreateString(name) : 0,
      author ? _fbb.CreateString(author) : 0,
      rating,
      info);
}

inline const kaspar::Book *GetBook(const void *buf) {
  return flatbuffers::GetRoot<kaspar::Book>(buf);
}

inline const kaspar::Book *GetSizePrefixedBook(const void *buf) {
  return flatbuffers::GetSizePrefixedRoot<kaspar::Book>(buf);
}

inline bool VerifyBookBuffer(
    flatbuffers::Verifier &verifier) {
  return verifier.VerifyBuffer<kaspar::Book>(nullptr);
}

inline bool VerifySizePrefixedBookBuffer(
    flatbuffers::Verifier &verifier) {
  return verifier.VerifySizePrefixedBuffer<kaspar::Book>(nullptr);
}

inline void FinishBookBuffer(
    flatbuffers::FlatBufferBuilder &fbb,
    flatbuffers::Offset<kaspar::Book> root) {
  fbb.Finish(root);
}

inline void FinishSizePrefixedBookBuffer(
    flatbuffers::FlatBufferBuilder &fbb,
    flatbuffers::Offset<kaspar::Book> root) {
  fbb.FinishSizePrefixed(root);
}

}  // namespace kaspar

#endif  // FLATBUFFERS_GENERATED_BOOK_KASPAR_H_
