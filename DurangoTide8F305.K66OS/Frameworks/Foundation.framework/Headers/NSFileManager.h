/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library


@interface NSFileManager : NSObject {
}
@property(assign) id delegate;	// G=0x327662c5; S=0x3278d645; converted property
+ (id)defaultManager;	// 0x3273da45
- (id)URLForDirectory:(unsigned)directory inDomain:(unsigned)domain appropriateForURL:(id)url create:(BOOL)create error:(id *)error;	// 0x3278e861
- (id)URLsForDirectory:(unsigned)directory inDomains:(unsigned)domains;	// 0x3278e9fd
- (id)_URLForReplacingItemAtURL:(id)url error:(id *)error;	// 0x3278eb15
- (id)_attributesOfItemAtPath:(id)path filterResourceFork:(BOOL)fork error:(id *)error;	// 0x3278d02d
- (id)_attributesOfItemAtURL:(id)url filterResourceFork:(BOOL)fork error:(id *)error;	// 0x3278cffd
- (id)_displayPathForPath:(id)path;	// 0x32791171
- (id)_info;	// 0x327662e5
- (void)_performRemoveFileAtPath:(id)path;	// 0x327d5d89
- (BOOL)_replaceItemAtURL:(id)url withItemAtURL:(id)url2 backupItemName:(id)name options:(unsigned)options resultingItemURL:(id *)url5 error:(id *)error;	// 0x32790581
- (void)_web_backgroundRemoveFileAtPath:(id)path;	// 0x327d5dc9
- (void)_web_backgroundRemoveLeftoverFiles:(id)files;	// 0x327d5c0d
- (id)_web_carbonPathForPath_nowarn:(id)path_nowarn;	// 0x327d58c5
- (BOOL)_web_changeFileAttributes_nowarn:(id)nowarn atPath:(id)path;	// 0x327d58cd
- (BOOL)_web_changeFinderAttributes:(id)attributes forFileAtPath:(id)path;	// 0x327d58c1
- (BOOL)_web_createDirectoryAtPathWithIntermediateDirectories:(id)intermediateDirectories attributes:(id)attributes;	// 0x32762f15
- (BOOL)_web_createFileAtPath:(id)path contents:(id)contents attributes:(id)attributes;	// 0x327d5cd5
- (BOOL)_web_createFileAtPathWithIntermediateDirectories:(id)intermediateDirectories contents:(id)contents attributes:(id)attributes directoryAttributes:(id)attributes4;	// 0x327d5d15
- (BOOL)_web_createIntermediateDirectoriesForPath_nowarn:(id)path_nowarn attributes:(id)attributes;	// 0x327d5915
- (BOOL)_web_fileExistsAtPath_nowarn:(id)path_nowarn isDirectory:(BOOL *)directory traverseLink:(BOOL)link;	// 0x327d5b91
- (void)_web_noteFileChangedAtPath_nowarn:(id)path_nowarn;	// 0x327d58c9
- (id)_web_pathWithUniqueFilenameForPath:(id)path;	// 0x327d5eb5
- (BOOL)_web_removeFileOnlyAtPath:(id)path;	// 0x32763771
- (id)_web_startupVolumeName_nowarn;	// 0x327d5b51
- (id)_web_visibleItemsInDirectoryAtPath:(id)path;	// 0x327d5bf9
- (id)attributesOfFileSystemForPath:(id)path error:(id *)error;	// 0x32762d61
- (id)attributesOfItemAtPath:(id)path error:(id *)error;	// 0x327477c1
- (BOOL)changeCurrentDirectoryPath:(id)path;	// 0x3278eeb5
- (BOOL)changeFileAttributes:(id)attributes atPath:(id)path;	// 0x3278d725
- (id)componentsToDisplayForPath:(id)path;	// 0x3278cf3d
- (id)contentsAtPath:(id)path;	// 0x32773a99
- (BOOL)contentsEqualAtPath:(id)path andPath:(id)path2;	// 0x327915f9
- (id)contentsOfDirectoryAtPath:(id)path error:(id *)error;	// 0x32762fa5
- (id)contentsOfDirectoryAtURL:(id)url includingPropertiesForKeys:(id)keys options:(unsigned)options error:(id *)error;	// 0x32791999
- (BOOL)copyItemAtPath:(id)path toPath:(id)path2 error:(id *)error;	// 0x3278fa3d
- (BOOL)copyItemAtURL:(id)url toURL:(id)url2 error:(id *)error;	// 0x3278f88d
- (BOOL)createDirectoryAtPath:(id)path attributes:(id)attributes;	// 0x3278efad
- (BOOL)createDirectoryAtPath:(id)path withIntermediateDirectories:(BOOL)intermediateDirectories attributes:(id)attributes error:(id *)error;	// 0x32744969
- (BOOL)createFileAtPath:(id)path contents:(id)contents attributes:(id)attributes;	// 0x32773369
- (BOOL)createSymbolicLinkAtPath:(id)path pathContent:(id)content;	// 0x3278d681
- (BOOL)createSymbolicLinkAtPath:(id)path withDestinationPath:(id)destinationPath error:(id *)error;	// 0x327903e5
- (id)currentDirectoryPath;	// 0x3278ee75
- (void)dealloc;	// 0x32748175
// converted property getter: - (id)delegate;	// 0x327662c5
- (id)destinationOfSymbolicLinkAtPath:(id)path error:(id *)error;	// 0x32775a89
- (BOOL)directoryCanBeCreatedAtPath:(id)path;	// 0x3278ee19
- (id)directoryContentsAtPath:(id)path;	// 0x32770b21
- (id)directoryContentsAtPath:(id)path matchingExtension:(id)extension options:(int)options keepExtension:(BOOL)extension4;	// 0x32770b49
- (id)directoryContentsAtPath:(id)path matchingExtension:(id)extension options:(int)options keepExtension:(BOOL)extension4 error:(id *)error;	// 0x32762fd1
- (id)displayNameAtPath:(id)path;	// 0x3278d6e1
- (id)enumeratorAtPath:(id)path;	// 0x3277591d
- (id)enumeratorAtURL:(id)url includingPropertiesForKeys:(id)keys options:(unsigned)options errorHandler:(id)handler;	// 0x3278e7bd
- (id)extendedAttributeForKey:(id)key atPath:(id)path error:(id *)error;	// 0x3278e399
- (id)extendedAttributesAtPath:(id)path error:(id *)error;	// 0x3278e3d1
- (id)fileAttributesAtPath:(id)path traverseLink:(BOOL)link;	// 0x3278d749
- (BOOL)fileExistsAtPath:(id)path;	// 0x32743e51
- (BOOL)fileExistsAtPath:(id)path isDirectory:(BOOL *)directory;	// 0x3275503d
- (id)fileSystemAttributesAtPath:(id)path;	// 0x3278d669
- (const char *)fileSystemRepresentationWithPath:(id)path;	// 0x32744c81
- (BOOL)filesystemItemCopyOperation:(id)operation shouldCopyItemAtPath:(id)path toPath:(id)path3;	// 0x3278d54d
- (BOOL)filesystemItemCopyOperation:(id)operation shouldProceedAfterError:(id)error copyingItemAtPath:(id)path toPath:(id)path4;	// 0x3278d44d
- (BOOL)filesystemItemLinkOperation:(id)operation shouldLinkItemAtPath:(id)path toPath:(id)path3;	// 0x3278d15d
- (BOOL)filesystemItemLinkOperation:(id)operation shouldProceedAfterError:(id)error linkingItemAtPath:(id)path toPath:(id)path4;	// 0x3278d05d
- (BOOL)filesystemItemMoveOperation:(id)operation shouldMoveItemAtPath:(id)path toPath:(id)path3;	// 0x3278d355
- (BOOL)filesystemItemMoveOperation:(id)operation shouldProceedAfterError:(id)error movingItemAtPath:(id)path toPath:(id)path4;	// 0x3278d255
- (BOOL)filesystemItemRemoveOperation:(id)operation shouldProceedAfterError:(id)error removingItemAtPath:(id)path;	// 0x327664b5
- (BOOL)filesystemItemRemoveOperation:(id)operation shouldRemoveItemAtPath:(id)path;	// 0x327661fd
- (BOOL)getFileSystemRepresentation:(char *)representation maxLength:(unsigned)length withPath:(id)path;	// 0x3273daa1
- (BOOL)isDeletableFileAtPath:(id)path;	// 0x3278eef5
- (BOOL)isExecutableFileAtPath:(id)path;	// 0x3278ee09
- (BOOL)isReadableFileAtPath:(id)path;	// 0x32764539
- (BOOL)isWritableFileAtPath:(id)path;	// 0x32764eb9
- (BOOL)linkItemAtPath:(id)path toPath:(id)path2 error:(id *)error;	// 0x3278f49d
- (BOOL)linkItemAtURL:(id)url toURL:(id)url2 error:(id *)error;	// 0x3278f2ed
- (id)mountedVolumeURLsIncludingResourceValuesForKeys:(id)keys options:(unsigned)options;	// 0x3278cf39
- (BOOL)moveItemAtPath:(id)path toPath:(id)path2 error:(id *)error;	// 0x3278f76d
- (BOOL)moveItemAtURL:(id)url toURL:(id)url2 error:(id *)error;	// 0x3278f5bd
- (id)pathContentOfSymbolicLinkAtPath:(id)path;	// 0x32775a71
- (BOOL)removeExtendedAttributeForKey:(id)key atPath:(id)path error:(id *)error;	// 0x3278efdd
- (BOOL)removeFileAtPath:(id)path handler:(id)handler;	// 0x3278d6c9
- (BOOL)removeItemAtPath:(id)path error:(id *)error;	// 0x32765fad
- (BOOL)removeItemAtURL:(id)url error:(id *)error;	// 0x3278e219
- (BOOL)replaceItemAtURL:(id)url withItemAtURL:(id)url2 backupItemName:(id)name options:(unsigned)options resultingItemURL:(id *)url5 error:(id *)error;	// 0x3278e715
- (BOOL)setAttributes:(id)attributes ofItemAtPath:(id)path error:(id *)error;	// 0x3278fbe9
// converted property setter: - (void)setDelegate:(id)delegate;	// 0x3278d645
- (BOOL)setExtendedAttribute:(id)attribute forKey:(id)key atPath:(id)path error:(id *)error;	// 0x3278f0f1
- (id)stringWithFileSystemRepresentation:(const char *)fileSystemRepresentation length:(unsigned)length;	// 0x32744875
- (id)subpathsAtPath:(id)path;	// 0x3278d6a5
- (id)subpathsOfDirectoryAtPath:(id)path error:(id *)error;	// 0x3278f225
@end

