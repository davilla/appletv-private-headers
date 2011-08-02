/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
 */

#import "AppSupport-Structs.h"
#import <NSObject.h> // Unknown library

@class NSCache, NSString;

@interface CPBitmapStore : NSObject {
	NSString *_path;	// 4 = 0x4
	NSString *_imagePath;	// 8 = 0x8
	sqlite3 *_db;	// 12 = 0xc
	sqlite3_stmt *_findStmt;	// 16 = 0x10
	sqlite3_stmt *_saveStmt;	// 20 = 0x14
	sqlite3_stmt *_beginStmt;	// 24 = 0x18
	sqlite3_stmt *_commitStmt;	// 28 = 0x1c
	BOOL _dbIsReadOnly;	// 32 = 0x20
	BOOL _dbIsMissing;	// 33 = 0x21
	CFRunLoopObserverRef _txnObserver;	// 36 = 0x24
	NSCache *_cache;	// 40 = 0x28
	int _version;	// 44 = 0x2c
}
@property(readonly, assign) sqlite3_stmt *beginStmt;	// G=0x322b4865; converted property
@property(readonly, assign) sqlite3_stmt *commitStmt;	// G=0x322b4825; converted property
@property(readonly, assign) sqlite3 *db;	// G=0x322b51a1; converted property
@property(readonly, assign) sqlite3_stmt *findStmt;	// G=0x322b48e5; converted property
@property(readonly, retain) NSString *imagePath;	// G=0x322b3f35; converted property
@property(readonly, assign) sqlite3_stmt *saveStmt;	// G=0x322b48a5; converted property
@property(readonly, assign, nonatomic) int version;	// G=0x322b4d0d; 
- (id)initWithPath:(id)path version:(int)version;	// 0x322b5361
- (id)allGroups;	// 0x322b4925
- (void)beginAutoTxn;	// 0x322b5291
// converted property getter: - (sqlite3_stmt *)beginStmt;	// 0x322b4865
// converted property getter: - (sqlite3_stmt *)commitStmt;	// 0x322b4825
- (void)commitTxn;	// 0x322b5311
- (void)createDbAt:(const char *)at;	// 0x322b4fe1
- (CGImageRef)createImageForKey:(id)key;	// 0x322b4285
// converted property getter: - (sqlite3 *)db;	// 0x322b51a1
- (id)dbPath;	// 0x322b3f0d
- (void)dealloc;	// 0x322b3ff5
- (BOOL)findImageWithKey:(id)key andInfo:(img *)info;	// 0x322b4d71
// converted property getter: - (sqlite3_stmt *)findStmt;	// 0x322b48e5
- (int)imageCount;	// 0x322b3eb9
// converted property getter: - (id)imagePath;	// 0x322b3f35
- (void)purge;	// 0x322b3fa1
- (void)removeImagesInGroups:(id)groups;	// 0x322b4a65
- (BOOL)saveImageWithKey:(id)key inGroup:(id)group andInfo:(img *)info;	// 0x322b4ec5
// converted property getter: - (sqlite3_stmt *)saveStmt;	// 0x322b48a5
- (int)setVersion:(int)version;	// 0x322b4a0d
- (CGImageRef)storeImageForKey:(id)key inGroup:(id)group withSize:(CGSize)size opaque:(BOOL)opaque scale:(float)scale draw:(id)draw;	// 0x322b43b1
// declared property getter: - (int)version;	// 0x322b4d0d
@end

