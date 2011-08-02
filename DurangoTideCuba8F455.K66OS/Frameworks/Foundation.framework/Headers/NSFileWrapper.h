/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library
#import "NSCoding.h"

@class NSString, NSDictionary;

@interface NSFileWrapper : NSObject <NSCoding> {
@private
	NSDictionary *_fileAttributes;	// 4 = 0x4
	NSString *_preferredFileName;	// 8 = 0x8
	NSString *_fileName;	// 12 = 0xc
	id _contents;	// 16 = 0x10
	id _icon;	// 20 = 0x14
	id _moreVars;	// 24 = 0x18
}
@property(retain) NSDictionary *fileAttributes;	// G=0x310d84b1; S=0x310d8271; converted property
@property(retain) id filename;	// G=0x310d65fd; S=0x310d662d; converted property
@property(retain) id preferredFilename;	// G=0x310d6669; S=0x310d8351; converted property
+ (BOOL)_canSafelyMapFilesAtPath:(id)path;	// 0x310da3cd
+ (BOOL)_finishWritingToURL:(id)url byMovingItemAtURL:(id)url2 addingAttributes:(id)attributes error:(id *)error;	// 0x310d5cfd
+ (BOOL)_finishWritingToURL:(id)url byTakingContentsFromItemAtURL:(id)url2 addingAttributes:(id)attributes usingTemporaryDirectoryAtURL:(id)url4 backupFileName:(id)name error:(id *)error;	// 0x310d5c89
+ (BOOL)_forPath:(id)path getItemKind:(id *)kind modificationDate:(id *)date;	// 0x310da2d5
+ (id)_newContentsAtURL:(id)url path:(id)path itemKind:(id)kind oldChildrenByUniqueFileName:(id)name options:(unsigned)options error:(id *)error;	// 0x310d75e9
+ (id)_pathForURL:(id)url reading:(BOOL)reading error:(id *)error;	// 0x310d5e91
+ (void)_removeTemporaryDirectoryAtURL:(id)url;	// 0x310da57d
+ (id)_temporaryDirectoryURLForWritingToURL:(id)url error:(id *)error;	// 0x310d5e51
+ (void)_writeAttributes:(id)attributes toURL:(id)url;	// 0x310d5db1
+ (void)initialize;	// 0x310d6bd9
- (id)init;	// 0x310d6bc1
- (id)initDirectoryWithFileWrappers:(id)fileWrappers;	// 0x310d7e89
- (id)initRegularFileWithContents:(id)contents;	// 0x310d6a9d
- (id)initSymbolicLinkWithDestinationURL:(id)destinationURL;	// 0x310d69c9
- (id)initWithCoder:(id)coder;	// 0x310d5fa1
- (id)initWithSerializedRepresentation:(id)serializedRepresentation;	// 0x310d67f9
- (id)initWithURL:(id)url options:(unsigned)options error:(id *)error;	// 0x310d6f71
- (id)_addChild:(id)child forUniqueFileName:(id)uniqueFileName;	// 0x310d6125
- (void)_addParent:(id)parent;	// 0x310da1e1
- (id)_attributesToWrite;	// 0x310d6279
- (void)_forWritingToURL:(id)url returnContentsLazyReadingError:(id *)error;	// 0x310d6c69
- (id)_fullDescription:(BOOL)description;	// 0x310d5c4d
- (id)_init;	// 0x310d6c0d
- (void)_initDirectoryContents;	// 0x310da275
- (id)_initWithImpl:(id)impl preferredFileName:(id)name uniqueFileName:(id)name3 docInfo:(id)info iconData:(id)data;	// 0x310d9601
- (BOOL)_matchesItemKind:(id)kind modificationDate:(id)date;	// 0x310d64c5
- (id)_newImpl;	// 0x310d9f49
- (void)_observePreferredFileNameOfChild:(id)child;	// 0x310d6699
- (BOOL)_readContentsFromURL:(id)url path:(id)path itemKind:(id)kind options:(unsigned)options error:(id *)error;	// 0x310d7375
- (void)_removeChild:(id)child forUniqueFileName:(id)uniqueFileName;	// 0x310d6071
- (void)_removeParent:(id)parent;	// 0x310da199
- (void)_resetFileModificationDate;	// 0x310d60a9
- (id)_uniqueFileNameOfChild:(id)child;	// 0x310d71bd
- (void)_updateDescendantFileNames;	// 0x310d7289
- (BOOL)_writeContentsToURL:(id)url path:(id)path originalContentsURL:(id)url3 tryHardLinking:(BOOL)linking didHardLinking:(BOOL *)linking5 error:(id *)error;	// 0x310d85ad
- (id)addFileWrapper:(id)wrapper;	// 0x310d9135
- (id)addRegularFileWithContents:(id)contents preferredFilename:(id)filename;	// 0x310d8191
- (void)dealloc;	// 0x310d7cad
- (void)encodeWithCoder:(id)coder;	// 0x310d6015
// converted property getter: - (id)fileAttributes;	// 0x310d84b1
- (id)fileWrappers;	// 0x310d8f55
// converted property getter: - (id)filename;	// 0x310d65fd
- (BOOL)isDirectory;	// 0x310d67b9
- (BOOL)isRegularFile;	// 0x310d6779
- (BOOL)isSymbolicLink;	// 0x310d6739
- (id)keyForFileWrapper:(id)fileWrapper;	// 0x310d8031
- (BOOL)matchesContentsOfURL:(id)url;	// 0x310d7a8d
// converted property getter: - (id)preferredFilename;	// 0x310d6669
- (BOOL)readFromURL:(id)url options:(unsigned)options error:(id *)error;	// 0x310d6ce9
- (id)regularFileContents;	// 0x310d8d99
- (void)removeFileWrapper:(id)wrapper;	// 0x310d80b5
- (id)serializedRepresentation;	// 0x310d9cf5
// converted property setter: - (void)setFileAttributes:(id)attributes;	// 0x310d8271
// converted property setter: - (void)setFilename:(id)filename;	// 0x310d662d
// converted property setter: - (void)setPreferredFilename:(id)filename;	// 0x310d8351
- (id)symbolicLinkDestinationURL;	// 0x310d8bdd
- (BOOL)writeToURL:(id)url options:(unsigned)options originalContentsURL:(id)url3 error:(id *)error;	// 0x310d9379
@end

