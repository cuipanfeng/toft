// Copyright (c) 2013, The Toft Authors.
// All rights reserved.
//
// Author: Ye Shunping <yeshunping@gmail.com>

#ifndef TOFT_COMPRESS_BLOCK_SNAPPY_H
#define TOFT_COMPRESS_BLOCK_SNAPPY_H

#include "toft/compress/block/block_compression.h"

namespace toft {

class SnappyCompression : public BlockCompression {
public:
    SnappyCompression();
    virtual ~SnappyCompression();

    virtual std::string GetName() {
        return "snappy";
    }

private:
    virtual bool DoCompress(const char* str, size_t length, std::string* out);
    virtual bool DoUncompress(const char* str, size_t length, std::string* out);

private:
    TOFT_DECLARE_UNCOPYABLE(SnappyCompression);
};
}  // namespace toft
#endif  // TOFT_COMPRESS_BLOCK_SNAPPY_H
