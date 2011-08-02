/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import <NSObject.h> // Unknown library


@interface MPFileValidationManager : NSObject {
}
+ (void)releaseSharedManager;	// 0x33cce261
+ (id)sharedManager;	// 0x33cce215
- (void)checkFileExtension:(id)extension isAudio:(BOOL *)audio isImage:(BOOL *)image isVideo:(BOOL *)video;	// 0x33cce459
- (id)resolveAliasPath:(id)path;	// 0x33cce869
- (id)resolveAliasPath:(id)path isAlias:(BOOL *)alias;	// 0x33cce881
- (BOOL)validateFiles:(id)files allowAudio:(BOOL)audio allowImages:(BOOL)images allowMovies:(BOOL)movies extensionsOnly:(BOOL)only;	// 0x33cce309
- (BOOL)validateFilesForAudio:(id)audio extensionsOnly:(BOOL)only;	// 0x33cce291
- (BOOL)validateFilesForImages:(id)images extensionsOnly:(BOOL)only;	// 0x33cce2b9
- (BOOL)validateFilesForMovies:(id)movies extensionsOnly:(BOOL)only;	// 0x33cce2e1
@end

