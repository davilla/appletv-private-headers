/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library


@interface NSFileManager : NSObject {
}
@property(assign) id delegate;	// G=0x3202d425; S=0x3206f3c1; converted property
+ (id)defaultManager;	// 0x32007be1
- (id)URLForDirectory:(unsigned)directory inDomain:(unsigned)domain appropriateForURL:(id)url create:(BOOL)create error:(id *)error;	// 0x3206e4e5
- (id)URLForPublishingUbiquitousItemAtURL:(id)url expirationDate:(id *)date error:(id *)error;	// 0x320715b1
- (id)URLForUbiquityContainerIdentifier:(id)ubiquityContainerIdentifier;	// 0x320712bd
- (id)URLsForDirectory:(unsigned)directory inDomains:(unsigned)domains;	// 0x32051ecd
- (id)_URLForReplacingItemAtURL:(id)url error:(id *)error;	// 0x3206e235
- (id)_attributesOfItemAtPath:(id)path filterResourceFork:(BOOL)fork error:(id *)error;	// 0x32070675
- (id)_attributesOfItemAtURL:(id)url filterResourceFork:(BOOL)fork error:(id *)error;	// 0x320706a5
- (id)_displayPathForPath:(id)path;	// 0x3206e861
- (id)_info;	// 0x3202d449
- (void)_performRemoveFileAtPath:(id)path;	// 0x320b74ed
- (void)_web_backgroundRemoveFileAtPath:(id)path;	// 0x320b7535
- (void)_web_backgroundRemoveLeftoverFiles:(id)files;	// 0x320b7629
- (id)_web_carbonPathForPath_nowarn:(id)path_nowarn;	// 0x320b7a25
- (BOOL)_web_changeFileAttributes_nowarn:(id)nowarn atPath:(id)path;	// 0x320b7d45
- (BOOL)_web_changeFinderAttributes:(id)attributes forFileAtPath:(id)path;	// 0x320b74a1
- (BOOL)_web_createDirectoryAtPathWithIntermediateDirectories:(id)intermediateDirectories attributes:(id)attributes;	// 0x32031655
- (BOOL)_web_createFileAtPath:(id)path contents:(id)contents attributes:(id)attributes;	// 0x320b74a5
- (BOOL)_web_createFileAtPathWithIntermediateDirectories:(id)intermediateDirectories contents:(id)contents attributes:(id)attributes directoryAttributes:(id)attributes4;	// 0x320b740d
- (BOOL)_web_createIntermediateDirectoriesForPath_nowarn:(id)path_nowarn attributes:(id)attributes;	// 0x320b7a75
- (BOOL)_web_fileExistsAtPath_nowarn:(id)path_nowarn isDirectory:(BOOL *)directory traverseLink:(BOOL)link;	// 0x320b78ed
- (void)_web_noteFileChangedAtPath_nowarn:(id)path_nowarn;	// 0x320b7d41
- (id)_web_pathWithUniqueFilenameForPath:(id)path;	// 0x320b773d
- (BOOL)_web_removeFileOnlyAtPath:(id)path;	// 0x3203216d
- (id)_web_startupVolumeName_nowarn;	// 0x320b7a29
- (id)_web_visibleItemsInDirectoryAtPath:(id)path;	// 0x320b7729
- (id)attributesOfFileSystemForPath:(id)path error:(id *)error;	// 0x3202900d
- (id)attributesOfItemAtPath:(id)path error:(id *)error;	// 0x3203aa89
- (BOOL)changeCurrentDirectoryPath:(id)path;	// 0x3206eae5
- (BOOL)changeFileAttributes:(id)attributes atPath:(id)path;	// 0x3206eb41
- (id)componentsToDisplayForPath:(id)path;	// 0x3206f121
- (id)contentsAtPath:(id)path;	// 0x320483b5
- (BOOL)contentsEqualAtPath:(id)path andPath:(id)path2;	// 0x3206ed95
- (id)contentsOfDirectoryAtPath:(id)path error:(id *)error;	// 0x3203168d
- (id)contentsOfDirectoryAtURL:(id)url includingPropertiesForKeys:(id)keys options:(unsigned)options error:(id *)error;	// 0x3206df15
- (BOOL)copyItemAtPath:(id)path toPath:(id)path2 error:(id *)error;	// 0x3206f601
- (BOOL)copyItemAtURL:(id)url toURL:(id)url2 error:(id *)error;	// 0x3206f721
- (BOOL)createDirectoryAtPath:(id)path attributes:(id)attributes;	// 0x3206ed21
- (BOOL)createDirectoryAtPath:(id)path withIntermediateDirectories:(BOOL)intermediateDirectories attributes:(id)attributes error:(id *)error;	// 0x3200b6f1
- (BOOL)createDirectoryAtURL:(id)url withIntermediateDirectories:(BOOL)intermediateDirectories attributes:(id)attributes error:(id *)error;	// 0x320704e5
- (BOOL)createFileAtPath:(id)path contents:(id)contents attributes:(id)attributes;	// 0x32047be5
- (BOOL)createSymbolicLinkAtPath:(id)path pathContent:(id)content;	// 0x3206ed71
- (BOOL)createSymbolicLinkAtPath:(id)path withDestinationPath:(id)destinationPath error:(id *)error;	// 0x320706d5
- (BOOL)createSymbolicLinkAtURL:(id)url withDestinationURL:(id)destinationURL error:(id *)error;	// 0x3207078d
- (id)currentDirectoryPath;	// 0x3206ea9d
- (void)dealloc;	// 0x32029705
// converted property getter: - (id)delegate;	// 0x3202d425
- (id)destinationOfSymbolicLinkAtPath:(id)path error:(id *)error;	// 0x32049bf5
- (BOOL)directoryCanBeCreatedAtPath:(id)path;	// 0x3206ea39
- (id)directoryContentsAtPath:(id)path;	// 0x3206ecd5
- (id)directoryContentsAtPath:(id)path matchingExtension:(id)extension options:(int)options keepExtension:(BOOL)extension4;	// 0x3206eca9
- (id)directoryContentsAtPath:(id)path matchingExtension:(id)extension options:(int)options keepExtension:(BOOL)extension4 error:(id *)error;	// 0x320316b9
- (id)displayNameAtPath:(id)path;	// 0x3206ec41
- (id)enumeratorAtPath:(id)path;	// 0x32049aa9
- (id)enumeratorAtURL:(id)url includingPropertiesForKeys:(id)keys options:(unsigned)options errorHandler:(id)handler;	// 0x32052079
- (BOOL)evictUbiquitousItemAtURL:(id)url error:(id *)error;	// 0x320710a9
- (id)extendedAttributeForKey:(id)key atPath:(id)path error:(id *)error;	// 0x3206f159
- (id)extendedAttributesAtPath:(id)path error:(id *)error;	// 0x3206f135
- (id)fileAttributesAtPath:(id)path traverseLink:(BOOL)link;	// 0x3206eb25
- (BOOL)fileExistsAtPath:(id)path;	// 0x32007c3d
- (BOOL)fileExistsAtPath:(id)path isDirectory:(BOOL *)directory;	// 0x3200b9dd
- (id)fileSystemAttributesAtPath:(id)path;	// 0x3206f10d
- (const char *)fileSystemRepresentationWithPath:(id)path;	// 0x3200bb8d
- (BOOL)filesystemItemCopyOperation:(id)operation shouldCopyItemAtPath:(id)path toPath:(id)path3;	// 0x3206f3e9
- (BOOL)filesystemItemCopyOperation:(id)operation shouldProceedAfterError:(id)error copyingItemAtPath:(id)path toPath:(id)path4;	// 0x3206f4f1
- (BOOL)filesystemItemLinkOperation:(id)operation shouldLinkItemAtPath:(id)path toPath:(id)path3;	// 0x3206fd51
- (BOOL)filesystemItemLinkOperation:(id)operation shouldProceedAfterError:(id)error linkingItemAtPath:(id)path toPath:(id)path4;	// 0x3206fe59
- (BOOL)filesystemItemMoveOperation:(id)operation shouldMoveItemAtPath:(id)path toPath:(id)path3;	// 0x3206f89d
- (BOOL)filesystemItemMoveOperation:(id)operation shouldProceedAfterError:(id)error movingItemAtPath:(id)path toPath:(id)path4;	// 0x3206f9a5
- (BOOL)filesystemItemRemoveOperation:(id)operation shouldProceedAfterError:(id)error removingItemAtPath:(id)path;	// 0x3202d821
- (BOOL)filesystemItemRemoveOperation:(id)operation shouldRemoveItemAtPath:(id)path;	// 0x3202d351
- (BOOL)getFileSystemRepresentation:(char *)representation maxLength:(unsigned)length withPath:(id)path;	// 0x32007e49
- (BOOL)isDeletableFileAtPath:(id)path;	// 0x3206eb75
- (BOOL)isExecutableFileAtPath:(id)path;	// 0x3206eb65
- (BOOL)isReadableFileAtPath:(id)path;	// 0x32035da9
- (BOOL)isUbiquitousItemAtURL:(id)url;	// 0x32070f0d
- (BOOL)isWritableFileAtPath:(id)path;	// 0x32029ac9
- (BOOL)linkItemAtPath:(id)path toPath:(id)path2 error:(id *)error;	// 0x3206ff69
- (BOOL)linkItemAtURL:(id)url toURL:(id)url2 error:(id *)error;	// 0x32070089
- (id)mountedVolumeURLsIncludingResourceValuesForKeys:(id)keys options:(unsigned)options;	// 0x3206df11
- (BOOL)moveItemAtPath:(id)path toPath:(id)path2 error:(id *)error;	// 0x3206fab5
- (BOOL)moveItemAtURL:(id)url toURL:(id)url2 error:(id *)error;	// 0x3206fbd5
- (id)pathContentOfSymbolicLinkAtPath:(id)path;	// 0x3206ed5d
- (BOOL)removeExtendedAttributeForKey:(id)key atPath:(id)path error:(id *)error;	// 0x3206f251
- (BOOL)removeFileAtPath:(id)path handler:(id)handler;	// 0x3206ec91
- (BOOL)removeItemAtPath:(id)path error:(id *)error;	// 0x3202bdd1
- (BOOL)removeItemAtURL:(id)url error:(id *)error;	// 0x32070205
- (BOOL)replaceItemAtURL:(id)url withItemAtURL:(id)url2 backupItemName:(id)name options:(unsigned)options resultingItemURL:(id *)url5 error:(id *)error;	// 0x320708ed
- (BOOL)setAttributes:(id)attributes ofItemAtPath:(id)path error:(id *)error;	// 0x32050441
// converted property setter: - (void)setDelegate:(id)delegate;	// 0x3206f3c1
- (BOOL)setExtendedAttribute:(id)attribute forKey:(id)key atPath:(id)path error:(id *)error;	// 0x3206f2dd
- (BOOL)setUbiquitous:(BOOL)ubiquitous itemAtURL:(id)url destinationURL:(id)url3 error:(id *)error;	// 0x32070ced
- (BOOL)startDownloadingUbiquitousItemAtURL:(id)url error:(id *)error;	// 0x32070a11
- (id)stringWithFileSystemRepresentation:(const char *)fileSystemRepresentation length:(unsigned)length;	// 0x3200b579
- (id)subpathsAtPath:(id)path;	// 0x3206ecf9
- (id)subpathsOfDirectoryAtPath:(id)path error:(id *)error;	// 0x320705a5
@end

