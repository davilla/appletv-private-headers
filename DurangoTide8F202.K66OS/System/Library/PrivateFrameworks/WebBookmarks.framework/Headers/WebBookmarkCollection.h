/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebBookmarks.framework/WebBookmarks
 */

#import "WebBookmarks-Structs.h"
#import <NSObject.h> // Unknown library


@interface WebBookmarkCollection : NSObject {
	sqlite3 *_db;	// 4 = 0x4
	CFLocaleRef _locale;	// 8 = 0x8
	CFStringTokenizerRef _wordTokenizer;	// 12 = 0xc
	BOOL _merging;	// 16 = 0x10
}
@property(assign, nonatomic, getter=isMerging) BOOL merging;	// G=0x325cc035; S=0x325cc045; @synthesize=_merging
+ (void)_postBookmarksChangedSyncNotification;	// 0x325cebdd
+ (BOOL)lockSync;	// 0x325ceb45
+ (id)safariBookmarkCollection;	// 0x325cc2e5
+ (id)safariDirectoryPath;	// 0x325ccaad
+ (void)unlockSync;	// 0x325ceaf5
- (id)initWithPath:(id)path;	// 0x325cc3e1
- (id)initWithPath:(id)path migratingBookmarksPlist:(id)plist syncAnchorPlist:(id)plist3;	// 0x325cc39d
- (int)_DAVGeneration;	// 0x325cffc9
- (BOOL)_addBookmarkWithTitle:(id)title address:(id)address parentID:(unsigned)anId orderIndex:(unsigned)index isFolder:(BOOL)folder externalUUID:(id)uuid associatedBookmark:(id)bookmark reorderSiblings:(BOOL)siblings updateParentChildCount:(BOOL)count updateAncestorEntries:(BOOL)entries;	// 0x325d2d41
- (BOOL)_addChildrenOfID:(unsigned)anId toCollection:(id)collection recursive:(BOOL)recursive error:(id *)error;	// 0x325ce3ad
- (id)_bookmarkDictionaryForSqliteRow:(sqlite3_stmt *)sqliteRow recursive:(BOOL)recursive error:(id *)error;	// 0x325ce191
- (unsigned)_bookmarkIDForServerID:(id)serverID;	// 0x325d2b29
- (id)_bookmarkWithAddress:(id)address parent:(unsigned)parent;	// 0x325d3035
- (id)_bookmarkWithServerID:(id)serverID;	// 0x325d0f0d
- (id)_bookmarkWithSpecialID:(unsigned)specialID;	// 0x325d1afd
- (id)_bookmarksFromStatementSelectingIDs:(const char *)statementSelectingIDs withQuery:(id)query;	// 0x325cdb65
- (id)_bookmarksInListWithID:(unsigned)anId fromIndex:(unsigned)index toIndex:(unsigned)index3 includeHidden:(BOOL)hidden;	// 0x325d009d
- (id)_changeList;	// 0x325cf441
- (BOOL)_clearAllSyncKeys;	// 0x325d16a1
- (BOOL)_clearAllTombstones;	// 0x325d05a5
- (void)_clearAndCreateAncestorTable;	// 0x325cfeb1
- (void)_clearAndCreateBookmarksTables;	// 0x325cfde1
- (void)_clearAndCreateBookmarksTitleWordTable;	// 0x325cff21
- (BOOL)_clearSyncKeysUnderBookmarkID:(unsigned)anId isFolder:(BOOL)folder;	// 0x325d1761
- (BOOL)_clearTitleWordsForBookmarkID:(unsigned)bookmarkID;	// 0x325cf565
- (void)_collectChangesOfType:(int)type withClause:(id)clause intoArray:(id)array;	// 0x325d0b45
- (void)_createSchema;	// 0x325d01c5
- (id)_databaseTitleForSpecialID:(unsigned)specialID;	// 0x325cf2f5
- (BOOL)_deleteAncestorTableEntriesForBookmarkID:(unsigned)bookmarkID;	// 0x325d1c01
- (BOOL)_deleteBookmark:(id)bookmark leaveTombstone:(BOOL)tombstone;	// 0x325cf72d
- (BOOL)_deleteRecursively:(unsigned)recursively isFolder:(BOOL)folder;	// 0x325d06c9
- (BOOL)_deleteSyncPropertyForKey:(id)key;	// 0x325ced89
- (int)_executeSQL:(id)sql;	// 0x325d08b9
- (int)_executeSQLWithCString:(const char *)cstring;	// 0x325d05cd
- (int)_finalizeStatementIfNotNull:(sqlite3_stmt *)null;	// 0x325d008d
- (id)_folderWithTitle:(id)title parent:(unsigned)parent;	// 0x325d3161
- (BOOL)_importBookmarksPlist:(id)plist;	// 0x325cf8cd
- (BOOL)_importSyncAnchorPlist:(id)plist;	// 0x325cf875
- (BOOL)_incrementDAVGeneration;	// 0x325d057d
- (BOOL)_incrementGeneration;	// 0x325cf505
- (BOOL)_indexAllTitleWords;	// 0x325d0cdd
- (BOOL)_indexBookmarkID:(unsigned)anId title:(id)title;	// 0x325d328d
- (BOOL)_insertAncestorTableEntriesForBookmarkID:(unsigned)bookmarkID withAncestorIDs:(id)ancestorIDs;	// 0x325d1cd5
- (BOOL)_insertAncestorTableEntriesForBookmarkID:(unsigned)bookmarkID withParentID:(unsigned)parentID;	// 0x325d1f1d
- (BOOL)_insertTombstoneWithServerID:(id)serverID;	// 0x325d183d
- (int)_intFromExecutingSQL:(id)executingSQL;	// 0x325d0981
- (BOOL)_markBookmarkID:(unsigned)anId withSpecialID:(unsigned)specialID;	// 0x325d0869
- (BOOL)_markSpecialBookmarks;	// 0x325cde55
- (BOOL)_mergeChildrenOfID:(unsigned)anId referencingBase:(id)base error:(id *)error;	// 0x325ce779
- (BOOL)_migrateBookmarksPlist:(id)plist syncAnchorPlist:(id)plist2;	// 0x325d03fd
- (void)_migrateSchemaVersion0ToVersion1;	// 0x325cfd51
- (void)_migrateSchemaVersion10ToVersion11;	// 0x325cf971
- (void)_migrateSchemaVersion11ToVersion12;	// 0x325cf921
- (void)_migrateSchemaVersion1And2ToVersion3;	// 0x325cfcc1
- (void)_migrateSchemaVersion3ToVersion4;	// 0x325cfc41
- (void)_migrateSchemaVersion4ToVersion5;	// 0x325cfbb1
- (void)_migrateSchemaVersion5ToVersion6;	// 0x325cfb61
- (void)_migrateSchemaVersion6ToVersion7;	// 0x325cfad1
- (void)_migrateSchemaVersion7ToVersion8;	// 0x325cfa81
- (void)_migrateSchemaVersion8ToVersion9;	// 0x325cfa11
- (void)_migrateSchemaVersion9ToVersion10;	// 0x325cf9c1
- (void)_migrateToCurrentSchema;	// 0x325d02f1
- (void)_normalizeDatabaseURLs;	// 0x325d1921
- (void)_normalizeSearchString:(CFStringRef)string;	// 0x325d0ac5
- (BOOL)_orderChildrenWithServerIDs:(id)serverIDs inFolderWithServerID:(id)serverID;	// 0x325cf5f1
- (int)_orderIndexForBookmarkInsertedIntoParent:(unsigned)bookmarkInsertedIntoParent insertAtBeginning:(BOOL)beginning;	// 0x325cffe9
- (void)_postBookmarksFolderContentsDidChangeNotification:(unsigned)_postBookmarksFolderContents;	// 0x325cf375
- (void)_postBookmarksSpecialFoldersDidChangeNotification;	// 0x325cf331
- (void)_postDistributedBookmarksDidReloadNotification;	// 0x325d0b21
- (sqlite3_stmt *)_prefixSearch:(id)search usingColumns:(const char *)columns maxCount:(unsigned)count;	// 0x325cc7b9
- (BOOL)_rebuildAncestorTable;	// 0x325cf5ad
- (void)_registerForSyncBookmarksFileChangedNotification;	// 0x325d0af1
- (BOOL)_reindexBookmarkID:(unsigned)anId title:(id)title;	// 0x325cf529
- (BOOL)_restoreBookmarkBarIfMissing;	// 0x325d05e9
- (BOOL)_saveBookmark:(id)bookmark withSpecialID:(unsigned)specialID updateGeneration:(BOOL)generation;	// 0x325d104d
- (sqlite3_stmt *)_selectBookmarksWhere:(id)where;	// 0x325d07f1
- (id)_serverIDForBookmarkID:(unsigned)bookmarkID;	// 0x325d2c2d
- (id)_serverIDsInFolderWithServerID:(id)serverID;	// 0x325d243d
- (BOOL)_setServerID:(id)anId forBookmark:(id)bookmark;	// 0x325d29f5
- (BOOL)_setSyncData:(id)data forBookmark:(id)bookmark;	// 0x325d277d
- (BOOL)_setSyncKey:(id)key forBookmark:(id)bookmark;	// 0x325d28c1
- (unsigned)_specialIDForBookmarkBeingSaved:(id)bookmarkBeingSaved;	// 0x325d08d5
- (unsigned)_specialIDForBookmarkTitle:(id)bookmarkTitle;	// 0x325d0a1d
- (BOOL)_syncAdd:(id)add toParent:(unsigned)parent withOrderIndex:(unsigned)orderIndex error:(id *)error;	// 0x325ce905
- (id)_syncKeysForServerIDs:(id)serverIDs;	// 0x325d2595
- (BOOL)_syncPropertyExistsForKey:(id)key;	// 0x325cee71
- (id)_uniqueExternalUUID;	// 0x325cff8d
- (BOOL)_unsafeOrderChildrenWithServerIDs:(id)serverIDs inFolderWithServerID:(id)serverID;	// 0x325d2079
- (BOOL)_updateCachedChildCountForParentID:(unsigned)parentID inDirection:(int)direction;	// 0x325cf6b9
- (BOOL)_updateHiddenAncestorCountForBookmarksUnderFolderID:(unsigned)bookmarksUnderFolderID addingOffset:(int)offset;	// 0x325d0e2d
- (int)_userVersion;	// 0x325cff71
- (BOOL)beginSyncTransaction;	// 0x325cde15
- (id)bookmarkAtPath:(id)path;	// 0x325ccb35
- (id)bookmarkWithID:(unsigned)anId;	// 0x325cc671
- (id)bookmarkWithUUID:(id)uuid;	// 0x325cc711
- (id)bookmarksBarBookmark;	// 0x325cc2a9
- (id)bookmarksBarList;	// 0x325cc0cd
- (id)bookmarksDictionary;	// 0x325ce521
- (id)bookmarksMatchingString:(id)string;	// 0x325ccf55
- (id)bookmarksWithTitlesMatchingString:(id)titlesMatchingString;	// 0x325cc091
- (id)bookmarksWithURLsMatchingString:(id)urlsMatchingString;	// 0x325cc055
- (void)commitSyncTransaction;	// 0x325cddf9
- (void)dealloc;	// 0x325cc535
- (BOOL)deleteBookmark:(id)bookmark;	// 0x325cd8e9
- (unsigned)generation;	// 0x325cde39
// declared property getter: - (BOOL)isMerging;	// 0x325cc035
- (id)listWithID:(unsigned)anId;	// 0x325cc24d
- (id)listWithID:(unsigned)anId skipOffset:(unsigned)offset;	// 0x325cc1cd
- (id)listWithID:(unsigned)anId skipOffset:(unsigned)offset includeHidden:(BOOL)hidden;	// 0x325cc0fd
- (id)listWithSpecialID:(unsigned)specialID;	// 0x325cc1f1
- (void)localeSettingsChanged;	// 0x325cce39
- (BOOL)mergeWithBookmarksDictionary:(id)bookmarksDictionary error:(id *)error;	// 0x325cea25
- (BOOL)moveBookmark:(id)bookmark toFolderWithID:(unsigned)anId;	// 0x325cd451
- (BOOL)reorderList:(id)list moveBookmarkAtIndex:(unsigned)index toIndex:(unsigned)index3;	// 0x325cd195
- (void)retrieveBookmarksMatchingString:(id)string delegate:(id)delegate userInfo:(void *)info;	// 0x325cc965
- (void)rollbackSyncTransaction;	// 0x325cdddd
- (id)rootBookmark;	// 0x325cc265
- (id)rootList;	// 0x325cc0e5
- (BOOL)saveBookmark:(id)bookmark;	// 0x325cda11
// declared property setter: - (void)setMerging:(BOOL)merging;	// 0x325cc045
- (BOOL)setSyncData:(id)data forKey:(id)key;	// 0x325cf081
- (id)subfoldersOfID:(unsigned)anId;	// 0x325cc595
- (id)syncDataForKey:(id)key;	// 0x325cef69
- (BOOL)syncSetString:(id)string forKey:(id)key;	// 0x325cec31
- (id)syncStringForKey:(id)key;	// 0x325cf1e9
- (BOOL)vacuum;	// 0x325cc2c1
@end

