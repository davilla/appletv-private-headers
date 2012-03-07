/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import <NSObject.h> // Unknown library


@interface MPFileValidationManager : NSObject {
}
+ (void)releaseSharedManager;	// 0x31aa4309
+ (id)sharedManager;	// 0x31aa42bd
- (void)checkFileExtension:(id)extension isAudio:(BOOL *)audio isImage:(BOOL *)image isVideo:(BOOL *)video;	// 0x31aa44f1
- (id)resolveAliasPath:(id)path;	// 0x31aa4859
- (id)resolveAliasPath:(id)path isAlias:(BOOL *)alias;	// 0x31aa486d
- (BOOL)validateFiles:(id)files allowAudio:(BOOL)audio allowImages:(BOOL)images allowMovies:(BOOL)movies extensionsOnly:(BOOL)only;	// 0x31aa43b5
- (BOOL)validateFilesForAudio:(id)audio extensionsOnly:(BOOL)only;	// 0x31aa4335
- (BOOL)validateFilesForImages:(id)images extensionsOnly:(BOOL)only;	// 0x31aa435d
- (BOOL)validateFilesForMovies:(id)movies extensionsOnly:(BOOL)only;	// 0x31aa4389
@end
