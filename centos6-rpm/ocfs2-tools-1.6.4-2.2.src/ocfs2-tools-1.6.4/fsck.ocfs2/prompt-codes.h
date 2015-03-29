#ifndef __PROMPT_CODES_H__
#define __PROMPT_CODES_H__
#define PR_EB_BLKNO \
	(struct prompt_code){ .str = "EB_BLKNO" }
#define PR_EB_GEN \
	(struct prompt_code){ .str = "EB_GEN" }
#define PR_EB_GEN_FIX \
	(struct prompt_code){ .str = "EB_GEN_FIX" }
#define PR_EXTENT_MARKED_UNWRITTEN \
	(struct prompt_code){ .str = "EXTENT_MARKED_UNWRITTEN" }
#define PR_EXTENT_MARKED_REFCOUNTED \
	(struct prompt_code){ .str = "EXTENT_MARKED_REFCOUNTED" }
#define PR_EXTENT_BLKNO_UNALIGNED \
	(struct prompt_code){ .str = "EXTENT_BLKNO_UNALIGNED" }
#define PR_EXTENT_CLUSTERS_OVERRUN \
	(struct prompt_code){ .str = "EXTENT_CLUSTERS_OVERRUN" }
#define PR_EXTENT_EB_INVALID \
	(struct prompt_code){ .str = "EXTENT_EB_INVALID" }
#define PR_EXTENT_LIST_DEPTH \
	(struct prompt_code){ .str = "EXTENT_LIST_DEPTH" }
#define PR_EXTENT_LIST_COUNT \
	(struct prompt_code){ .str = "EXTENT_LIST_COUNT" }
#define PR_EXTENT_LIST_FREE \
	(struct prompt_code){ .str = "EXTENT_LIST_FREE" }
#define PR_EXTENT_BLKNO_RANGE \
	(struct prompt_code){ .str = "EXTENT_BLKNO_RANGE" }
#define PR_CHAIN_CPG \
	(struct prompt_code){ .str = "CHAIN_CPG" }
#define PR_SUPERBLOCK_CLUSTERS \
	(struct prompt_code){ .str = "SUPERBLOCK_CLUSTERS" }
#define PR_FIXED_CHAIN_CLUSTERS \
	(struct prompt_code){ .str = "FIXED_CHAIN_CLUSTERS" }
#define PR_GROUP_UNEXPECTED_DESC \
	(struct prompt_code){ .str = "GROUP_UNEXPECTED_DESC" }
#define PR_GROUP_EXPECTED_DESC \
	(struct prompt_code){ .str = "GROUP_EXPECTED_DESC" }
#define PR_GROUP_GEN \
	(struct prompt_code){ .str = "GROUP_GEN" }
#define PR_GROUP_PARENT \
	(struct prompt_code){ .str = "GROUP_PARENT" }
#define PR_GROUP_DUPLICATE \
	(struct prompt_code){ .str = "GROUP_DUPLICATE" }
#define PR_GROUP_BLKNO \
	(struct prompt_code){ .str = "GROUP_BLKNO" }
#define PR_GROUP_CHAIN \
	(struct prompt_code){ .str = "GROUP_CHAIN" }
#define PR_GROUP_FREE_BITS \
	(struct prompt_code){ .str = "GROUP_FREE_BITS" }
#define PR_CHAIN_COUNT \
	(struct prompt_code){ .str = "CHAIN_COUNT" }
#define PR_CHAIN_NEXT_FREE \
	(struct prompt_code){ .str = "CHAIN_NEXT_FREE" }
#define PR_CHAIN_EMPTY \
	(struct prompt_code){ .str = "CHAIN_EMPTY" }
#define PR_CHAIN_I_CLUSTERS \
	(struct prompt_code){ .str = "CHAIN_I_CLUSTERS" }
#define PR_CHAIN_I_SIZE \
	(struct prompt_code){ .str = "CHAIN_I_SIZE" }
#define PR_CHAIN_GROUP_BITS \
	(struct prompt_code){ .str = "CHAIN_GROUP_BITS" }
#define PR_CHAIN_HEAD_LINK_RANGE \
	(struct prompt_code){ .str = "CHAIN_HEAD_LINK_RANGE" }
#define PR_CHAIN_LINK_GEN \
	(struct prompt_code){ .str = "CHAIN_LINK_GEN" }
#define PR_CHAIN_LINK_MAGIC \
	(struct prompt_code){ .str = "CHAIN_LINK_MAGIC" }
#define PR_CHAIN_LINK_RANGE \
	(struct prompt_code){ .str = "CHAIN_LINK_RANGE" }
#define PR_CHAIN_BITS \
	(struct prompt_code){ .str = "CHAIN_BITS" }
#define PR_DISCONTIG_BG_DEPTH \
	(struct prompt_code){ .str = "DISCONTIG_BG_DEPTH" }
#define PR_DISCONTIG_BG_COUNT \
	(struct prompt_code){ .str = "DISCONTIG_BG_COUNT" }
#define PR_DISCONTIG_BG_REC_RANGE \
	(struct prompt_code){ .str = "DISCONTIG_BG_REC_RANGE" }
#define PR_DISCONTIG_BG_CORRUPT_LEAVES \
	(struct prompt_code){ .str = "DISCONTIG_BG_CORRUPT_LEAVES" }
#define PR_DISCONTIG_BG_CLUSTERS \
	(struct prompt_code){ .str = "DISCONTIG_BG_CLUSTERS" }
#define PR_DISCONTIG_BG_LESS_CLUSTERS \
	(struct prompt_code){ .str = "DISCONTIG_BG_LESS_CLUSTERS" }
#define PR_DISCONTIG_BG_NEXT_FREE_REC \
	(struct prompt_code){ .str = "DISCONTIG_BG_NEXT_FREE_REC" }
#define PR_DISCONTIG_BG_LIST_CORRUPT \
	(struct prompt_code){ .str = "DISCONTIG_BG_LIST_CORRUPT" }
#define PR_DISCONTIG_BG_REC_CORRUPT \
	(struct prompt_code){ .str = "DISCONTIG_BG_REC_CORRUPT" }
#define PR_DISCONTIG_BG_LEAF_CLUSTERS \
	(struct prompt_code){ .str = "DISCONTIG_BG_LEAF_CLUSTERS" }
#define PR_INODE_ALLOC_REPAIR \
	(struct prompt_code){ .str = "INODE_ALLOC_REPAIR" }
#define PR_INODE_SUBALLOC \
	(struct prompt_code){ .str = "INODE_SUBALLOC" }
#define PR_LALLOC_SIZE \
	(struct prompt_code){ .str = "LALLOC_SIZE" }
#define PR_LALLOC_NZ_USED \
	(struct prompt_code){ .str = "LALLOC_NZ_USED" }
#define PR_LALLOC_NZ_BM \
	(struct prompt_code){ .str = "LALLOC_NZ_BM" }
#define PR_LALLOC_BM_OVERRUN \
	(struct prompt_code){ .str = "LALLOC_BM_OVERRUN" }
#define PR_LALLOC_BM_SIZE \
	(struct prompt_code){ .str = "LALLOC_BM_SIZE" }
#define PR_LALLOC_BM_STRADDLE \
	(struct prompt_code){ .str = "LALLOC_BM_STRADDLE" }
#define PR_LALLOC_USED_OVERRUN \
	(struct prompt_code){ .str = "LALLOC_USED_OVERRUN" }
#define PR_LALLOC_CLEAR \
	(struct prompt_code){ .str = "LALLOC_CLEAR" }
#define PR_DEALLOC_COUNT \
	(struct prompt_code){ .str = "DEALLOC_COUNT" }
#define PR_DEALLOC_USED \
	(struct prompt_code){ .str = "DEALLOC_USED" }
#define PR_TRUNCATE_REC_START_RANGE \
	(struct prompt_code){ .str = "TRUNCATE_REC_START_RANGE" }
#define PR_TRUNCATE_REC_WRAP \
	(struct prompt_code){ .str = "TRUNCATE_REC_WRAP" }
#define PR_TRUNCATE_REC_RANGE \
	(struct prompt_code){ .str = "TRUNCATE_REC_RANGE" }
#define PR_INODE_GEN \
	(struct prompt_code){ .str = "INODE_GEN" }
#define PR_INODE_GEN_FIX \
	(struct prompt_code){ .str = "INODE_GEN_FIX" }
#define PR_INODE_BLKNO \
	(struct prompt_code){ .str = "INODE_BLKNO" }
#define PR_ROOT_NOTDIR \
	(struct prompt_code){ .str = "ROOT_NOTDIR" }
#define PR_INODE_NZ_DTIME \
	(struct prompt_code){ .str = "INODE_NZ_DTIME" }
#define PR_LINK_FAST_DATA \
	(struct prompt_code){ .str = "LINK_FAST_DATA" }
#define PR_LINK_NULLTERM \
	(struct prompt_code){ .str = "LINK_NULLTERM" }
#define PR_LINK_SIZE \
	(struct prompt_code){ .str = "LINK_SIZE" }
#define PR_LINK_BLOCKS \
	(struct prompt_code){ .str = "LINK_BLOCKS" }
#define PR_DIR_ZERO \
	(struct prompt_code){ .str = "DIR_ZERO" }
#define PR_INODE_SIZE \
	(struct prompt_code){ .str = "INODE_SIZE" }
#define PR_INODE_SPARSE_SIZE \
	(struct prompt_code){ .str = "INODE_SPARSE_SIZE" }
#define PR_INODE_INLINE_SIZE \
	(struct prompt_code){ .str = "INODE_INLINE_SIZE" }
#define PR_INODE_CLUSTERS \
	(struct prompt_code){ .str = "INODE_CLUSTERS" }
#define PR_INODE_SPARSE_CLUSTERS \
	(struct prompt_code){ .str = "INODE_SPARSE_CLUSTERS" }
#define PR_INODE_INLINE_CLUSTERS \
	(struct prompt_code){ .str = "INODE_INLINE_CLUSTERS" }
#define PR_LALLOC_REPAIR \
	(struct prompt_code){ .str = "LALLOC_REPAIR" }
#define PR_LALLOC_USED \
	(struct prompt_code){ .str = "LALLOC_USED" }
#define PR_CLUSTER_ALLOC_BIT \
	(struct prompt_code){ .str = "CLUSTER_ALLOC_BIT" }
#define PR_REFCOUNT_FLAG_INVALID \
	(struct prompt_code){ .str = "REFCOUNT_FLAG_INVALID" }
#define PR_REFCOUNT_LOC_INVALID \
	(struct prompt_code){ .str = "REFCOUNT_LOC_INVALID" }
#define PR_RB_BLKNO \
	(struct prompt_code){ .str = "RB_BLKNO" }
#define PR_RB_GEN \
	(struct prompt_code){ .str = "RB_GEN" }
#define PR_RB_GEN_FIX \
	(struct prompt_code){ .str = "RB_GEN_FIX" }
#define PR_RB_PARENT \
	(struct prompt_code){ .str = "RB_PARENT" }
#define PR_REFCOUNT_LIST_COUNT \
	(struct prompt_code){ .str = "REFCOUNT_LIST_COUNT" }
#define PR_REFCOUNT_LIST_USED \
	(struct prompt_code){ .str = "REFCOUNT_LIST_USED" }
#define PR_REFCOUNT_CLUSTER_RANGE \
	(struct prompt_code){ .str = "REFCOUNT_CLUSTER_RANGE" }
#define PR_REFCOUNT_CLUSTER_COLLISION \
	(struct prompt_code){ .str = "REFCOUNT_CLUSTER_COLLISION" }
#define PR_REFCOUNT_LIST_EMPTY \
	(struct prompt_code){ .str = "REFCOUNT_LIST_EMPTY" }
#define PR_REFCOUNT_BLOCK_INVALID \
	(struct prompt_code){ .str = "REFCOUNT_BLOCK_INVALID" }
#define PR_REFCOUNT_CLUSTERS \
	(struct prompt_code){ .str = "REFCOUNT_CLUSTERS" }
#define PR_REFCOUNT_ROOT_BLOCK_INVALID \
	(struct prompt_code){ .str = "REFCOUNT_ROOT_BLOCK_INVALID" }
#define PR_REFCOUNT_REC_REDUNDANT \
	(struct prompt_code){ .str = "REFCOUNT_REC_REDUNDANT" }
#define PR_REFCOUNT_COUNT_INVALID \
	(struct prompt_code){ .str = "REFCOUNT_COUNT_INVALID" }
#define PR_REFCOUNT_COUNT \
	(struct prompt_code){ .str = "REFCOUNT_COUNT" }
#define PR_DUP_CLUSTERS_SYSFILE_CLONE \
	(struct prompt_code){ .str = "DUP_CLUSTERS_SYSFILE_CLONE" }
#define PR_DUP_CLUSTERS_CLONE \
	(struct prompt_code){ .str = "DUP_CLUSTERS_CLONE" }
#define PR_DUP_CLUSTERS_DELETE \
	(struct prompt_code){ .str = "DUP_CLUSTERS_DELETE" }
#define PR_DUP_CLUSTERS_ADD_REFCOUNT \
	(struct prompt_code){ .str = "DUP_CLUSTERS_ADD_REFCOUNT" }
#define PR_DIRENT_DOTTY_DUP \
	(struct prompt_code){ .str = "DIRENT_DOTTY_DUP" }
#define PR_DIRENT_NOT_DOTTY \
	(struct prompt_code){ .str = "DIRENT_NOT_DOTTY" }
#define PR_DIRENT_DOT_INODE \
	(struct prompt_code){ .str = "DIRENT_DOT_INODE" }
#define PR_DIRENT_DOT_EXCESS \
	(struct prompt_code){ .str = "DIRENT_DOT_EXCESS" }
#define PR_DIRENT_ZERO \
	(struct prompt_code){ .str = "DIRENT_ZERO" }
#define PR_DIRENT_NAME_CHARS \
	(struct prompt_code){ .str = "DIRENT_NAME_CHARS" }
#define PR_DIRENT_INODE_RANGE \
	(struct prompt_code){ .str = "DIRENT_INODE_RANGE" }
#define PR_DIRENT_INODE_FREE \
	(struct prompt_code){ .str = "DIRENT_INODE_FREE" }
#define PR_DIRENT_TYPE \
	(struct prompt_code){ .str = "DIRENT_TYPE" }
#define PR_DIR_PARENT_DUP \
	(struct prompt_code){ .str = "DIR_PARENT_DUP" }
#define PR_DIRENT_DUPLICATE \
	(struct prompt_code){ .str = "DIRENT_DUPLICATE" }
#define PR_DIRENT_LENGTH \
	(struct prompt_code){ .str = "DIRENT_LENGTH" }
#define PR_DIR_TRAILER_INODE \
	(struct prompt_code){ .str = "DIR_TRAILER_INODE" }
#define PR_DIR_TRAILER_NAME_LEN \
	(struct prompt_code){ .str = "DIR_TRAILER_NAME_LEN" }
#define PR_DIR_TRAILER_REC_LEN \
	(struct prompt_code){ .str = "DIR_TRAILER_REC_LEN" }
#define PR_DIR_TRAILER_BLKNO \
	(struct prompt_code){ .str = "DIR_TRAILER_BLKNO" }
#define PR_DIR_TRAILER_PARENT_INODE \
	(struct prompt_code){ .str = "DIR_TRAILER_PARENT_INODE" }
#define PR_ROOT_DIR_MISSING \
	(struct prompt_code){ .str = "ROOT_DIR_MISSING" }
#define PR_LOSTFOUND_MISSING \
	(struct prompt_code){ .str = "LOSTFOUND_MISSING" }
#define PR_DIR_NOT_CONNECTED \
	(struct prompt_code){ .str = "DIR_NOT_CONNECTED" }
#define PR_DIR_DOTDOT \
	(struct prompt_code){ .str = "DIR_DOTDOT" }
#define PR_INODE_NOT_CONNECTED \
	(struct prompt_code){ .str = "INODE_NOT_CONNECTED" }
#define PR_INODE_COUNT \
	(struct prompt_code){ .str = "INODE_COUNT" }
#define PR_INODE_ORPHANED \
	(struct prompt_code){ .str = "INODE_ORPHANED" }
#define PR_RECOVER_BACKUP_SUPERBLOCK \
	(struct prompt_code){ .str = "RECOVER_BACKUP_SUPERBLOCK" }
#define PR_ORPHAN_DIR_MISSING \
	(struct prompt_code){ .str = "ORPHAN_DIR_MISSING" }
#define PR_JOURNAL_FILE_INVALID \
	(struct prompt_code){ .str = "JOURNAL_FILE_INVALID" }
#define PR_JOURNAL_UNKNOWN_FEATURE \
	(struct prompt_code){ .str = "JOURNAL_UNKNOWN_FEATURE" }
#define PR_JOURNAL_MISSING_FEATURE \
	(struct prompt_code){ .str = "JOURNAL_MISSING_FEATURE" }
#define PR_JOURNAL_TOO_SMALL \
	(struct prompt_code){ .str = "JOURNAL_TOO_SMALL" }
#define PR_RECOVER_CLUSTER_INFO \
	(struct prompt_code){ .str = "RECOVER_CLUSTER_INFO" }
#define PR_INLINE_DATA_FLAG_INVALID \
	(struct prompt_code){ .str = "INLINE_DATA_FLAG_INVALID" }
#define PR_INLINE_DATA_COUNT_INVALID \
	(struct prompt_code){ .str = "INLINE_DATA_COUNT_INVALID" }
#define PR_XATTR_BLOCK_INVALID \
	(struct prompt_code){ .str = "XATTR_BLOCK_INVALID" }
#define PR_XATTR_COUNT_INVALID \
	(struct prompt_code){ .str = "XATTR_COUNT_INVALID" }
#define PR_XATTR_ENTRY_INVALID \
	(struct prompt_code){ .str = "XATTR_ENTRY_INVALID" }
#define PR_XATTR_NAME_OFFSET_INVALID \
	(struct prompt_code){ .str = "XATTR_NAME_OFFSET_INVALID" }
#define PR_XATTR_VALUE_INVALID \
	(struct prompt_code){ .str = "XATTR_VALUE_INVALID" }
#define PR_XATTR_LOCATION_INVALID \
	(struct prompt_code){ .str = "XATTR_LOCATION_INVALID" }
#define PR_XATTR_HASH_INVALID \
	(struct prompt_code){ .str = "XATTR_HASH_INVALID" }
#define PR_XATTR_FREE_START_INVALID \
	(struct prompt_code){ .str = "XATTR_FREE_START_INVALID" }
#define PR_XATTR_VALUE_LEN_INVALID \
	(struct prompt_code){ .str = "XATTR_VALUE_LEN_INVALID" }
#define PR_XATTR_BUCKET_COUNT_INVALID \
	(struct prompt_code){ .str = "XATTR_BUCKET_COUNT_INVALID" }
#define PR_QMAGIC_INVALID \
	(struct prompt_code){ .str = "QMAGIC_INVALID" }
#define PR_QTREE_BLK_INVALID \
	(struct prompt_code){ .str = "QTREE_BLK_INVALID" }
#define PR_DQBLK_INVALID \
	(struct prompt_code){ .str = "DQBLK_INVALID" }
#define PR_DUP_DQBLK_INVALID \
	(struct prompt_code){ .str = "DUP_DQBLK_INVALID" }
#define PR_DUP_DQBLK_VALID \
	(struct prompt_code){ .str = "DUP_DQBLK_VALID" }
#define PR_IV_DX_TREE \
	(struct prompt_code){ .str = "IV_DX_TREE" }
#define PR_DX_LOOKUP_FAILED \
	(struct prompt_code){ .str = "DX_LOOKUP_FAILED" }
#endif
