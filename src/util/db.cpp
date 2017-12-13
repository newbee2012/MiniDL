#include "util/db.hpp"
#include "util/db_lmdb.hpp"
#include "common.hpp"
#include <string>

namespace caffe
{
namespace db
{

DB* GetDB(const string& backend)
{
#ifdef USE_LEVELDB

    if (backend == "leveldb") {
        return new LevelDB();
    }

#endif  // USE_LEVELDB
#ifdef USE_LMDB

    if (backend == "lmdb") {
        return new LMDB();
    }

#endif  // USE_LMDB
    LOG(FATAL) << "Unknown database backend";
    return NULL;
}

}  // namespace db
}  // namespace caffe
