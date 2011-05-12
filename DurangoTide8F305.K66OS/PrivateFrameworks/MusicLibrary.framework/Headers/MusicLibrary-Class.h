/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import "MusicLibrary-Structs.h"
#import <NSObject.h> // Unknown library

@class NSString;

@interface MusicLibrary : NSObject {
@private
	NSString *_basePath;	// 4 = 0x4
	double _autoflushTargetTime;	// 8 = 0x8
	unsigned _autoflushScheduled : 1;	// 16 = 0x10
	unsigned _needsFlush : 1;	// 16 = 0x10
}
+ (BOOL)_isDBSyncActiveIncludePending;	// 0x333b05e1
+ (void)_setSharedMusicLibrary:(id)library;	// 0x333b5351
+ (id)_sharedMusicLibrary:(BOOL)library;	// 0x333b03e5
+ (void)beginDatabaseMigrationIfNecessary;	// 0x333a7441
+ (void)commitAllDeferredWork;	// 0x333bfa6d
+ (id)controlDirectoryPathWithBasePath:(id)basePath;	// 0x333a7179
+ (id)copyLocalizedStringForITTGLocString:(int)ittglocString;	// 0x333c04e1
+ (BOOL)databaseDataFilesExist;	// 0x333a72ad
+ (id)dbModDate;	// 0x333c02b1
+ (void)disableFlush;	// 0x333c0355
+ (void)enableFlush;	// 0x333c0319
+ (int)filenameFormatResourceForPlaylistType:(int)playlistType;	// 0x333b7b51
+ (BOOL)flush;	// 0x333b6045
+ (void)flushPreparedStatementCache;	// 0x333bfbb5
+ (id)iTunesLibraryPackageDBTempFolder;	// 0x333bfdb1
+ (BOOL)isDBSyncActive;	// 0x333a7865
+ (BOOL)isDatabaseSchemaUnsupported:(id *)unsupported;	// 0x333a74c5
+ (BOOL)isFlushEnabled;	// 0x333bf8fd
+ (BOOL)isTesting;	// 0x333bf8e5
+ (void)jetsamMemory;	// 0x333bfb89
+ (id)mediaFolderRelativePath:(id)path;	// 0x333c0665
+ (void)noteSyncAlreadyActive;	// 0x333bfc85
+ (void)noteSyncDidEnd;	// 0x333bfbe1
+ (void)noteSyncWillBegin;	// 0x333bfd11
+ (id)pathForResourceFileOrFolder:(int)resourceFileOrFolder;	// 0x333a6bd9
+ (id)pathForResourceFileOrFolder:(int)resourceFileOrFolder basePath:(id)path createParentFolderIfNecessary:(BOOL)necessary;	// 0x333b6aa5
+ (id)pathForResourceFileOrFolder:(int)resourceFileOrFolder basePath:(id)path relativeToBase:(BOOL)base;	// 0x333a6bf9
+ (id)pathForResourceFileOrFolder:(int)resourceFileOrFolder basePath:(id)path relativeToBase:(BOOL)base isFolder:(BOOL *)folder;	// 0x333a6c25
+ (BOOL)requiresPostProcessing;	// 0x333aa645
+ (void)resetLibrary;	// 0x333c037d
+ (void)setIsTesting:(BOOL)testing;	// 0x333bf8cd
+ (void)setSyncIsActive:(BOOL)active alreadyInTargetState:(BOOL)targetState withStateChangeHandlerBlock:(id)stateChangeHandlerBlock;	// 0x333c043d
+ (id)sharedMusicLibrary;	// 0x333b03cd
+ (Class)sharedMusicLibraryClass;	// 0x333a72d1
+ (id)sharedMusicLibraryIfExists;	// 0x333b4b45
+ (unsigned long long)syncGenerationID;	// 0x333b5e7d
- (id)initWithBasePath:(id)basePath;	// 0x333b0775
- (void)_autoflush;	// 0x333bfb19
- (void)_cancelAutoflush;	// 0x333bfb41
- (id)_debugGetTracksStartingAtTrackWithPersistentID:(unsigned long long)persistentID maxTracks:(unsigned)tracks stride:(int)stride;	// 0x333bffb1
- (void)dealloc;	// 0x333bfe35
- (BOOL)flush;	// 0x333b607d
- (void)flushPreparedStatementCacheImpl;	// 0x333bf8f5
- (MLArtworkFormatSpec)formatSpecForArtworkFormatID:(unsigned)artworkFormatID;	// 0x333c028d
- (void)jetsamMemoryImpl;	// 0x333bf8f9
- (id)localizedSectionHeaderForSectionHeader:(id)sectionHeader;	// 0x333b53c1
- (id)localizedSectionIndexForSectionHeader:(id)sectionHeader;	// 0x333b57f1
- (void)mainThread_scheduleFlushDatabase;	// 0x333bfe91
- (id)pathForResourceFileOrFolder:(int)resourceFileOrFolder;	// 0x333bf91d
- (id)pathForResourceFileOrFolder:(int)resourceFileOrFolder createParentFolderIfNecessary:(BOOL)necessary;	// 0x333b6a65
- (void)scheduleFlushDatabase;	// 0x333b82e5
- (id)sectionIndexEllipsis;	// 0x333bf911
- (id)sectionIndexForSectionHeader:(id)sectionHeader;	// 0x333b54e9
- (id)sectionIndices;	// 0x333b5499
@end

