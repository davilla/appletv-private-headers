/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
 */

#import "AppSupport-Structs.h"
#import "CPBitmapStore.h"


@interface CPBitmapStoreSQL : CPBitmapStore {
@private
	sqlite3 *_db;	// 20 = 0x14
	sqlite3_stmt *_findStmt;	// 24 = 0x18
	sqlite3_stmt *_saveStmt;	// 28 = 0x1c
	sqlite3_stmt *_beginStmt;	// 32 = 0x20
	sqlite3_stmt *_commitStmt;	// 36 = 0x24
	BOOL _dbIsReadOnly;	// 40 = 0x28
	BOOL _dbIsMissing;	// 41 = 0x29
	CFRunLoopObserverRef _txnObserver;	// 44 = 0x2c
}
@property(readonly, assign) sqlite3_stmt *beginStmt;	// G=0x3436a735; converted property
@property(readonly, assign) sqlite3_stmt *commitStmt;	// G=0x3436a779; converted property
@property(readonly, assign) sqlite3 *db;	// G=0x3436a7bd; converted property
@property(readonly, assign) sqlite3_stmt *findStmt;	// G=0x3436a6ad; converted property
@property(readonly, assign) sqlite3_stmt *saveStmt;	// G=0x3436a6f1; converted property
- (id)initWithPath:(id)path version:(int)version;	// 0x34369f0d
- (CGImageRef)_copyAndStoreImageForKey:(id)key inGroup:(id)group withSize:(CGSize)size opaque:(BOOL)opaque scale:(float)scale fillMem:(id)mem alternateCompletion:(id)completion;	// 0x3436a155
- (void)beginAutoTxn;	// 0x3436a979
// converted property getter: - (sqlite3_stmt *)beginStmt;	// 0x3436a735
// converted property getter: - (sqlite3_stmt *)commitStmt;	// 0x3436a779
- (void)commitTransaction;	// 0x3436a1d5
- (void)commitTxn;	// 0x3436aa09
- (CGImageRef)copyImageForKey:(id)key inGroup:(id)group;	// 0x3436a109
- (void)createDbAt:(const char *)at;	// 0x3436a85d
// converted property getter: - (sqlite3 *)db;	// 0x3436a7bd
- (id)dbPath;	// 0x3436aa61
- (void)dealloc;	// 0x34369f95
- (BOOL)findImageWithKey:(id)key inGroup:(id)group andInfo:(img *)info;	// 0x3436a4b9
// converted property getter: - (sqlite3_stmt *)findStmt;	// 0x3436a6ad
- (id)imageNameForKey:(id)key inGroup:(id)group;	// 0x3436a04d
- (unsigned)memContentOffset;	// 0x3436a105
- (void *)openAndMmap:(id)mmap withInfo:(img *)info;	// 0x3436a099
- (void)purge;	// 0x3436aa89
- (void)removeImagesInGroups:(id)groups;	// 0x3436a1e5
- (BOOL)saveImageWithKey:(id)key inGroup:(id)group andInfo:(img *)info;	// 0x3436a5c1
// converted property getter: - (sqlite3_stmt *)saveStmt;	// 0x3436a6f1
- (int)setVersion:(int)version;	// 0x3436ab3d
- (int)version;	// 0x3436aad1
@end

