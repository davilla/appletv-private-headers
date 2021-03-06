/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRControlHeightFactory.h"
#import <NSObject.h> // Unknown library
#import "BRControlFactory.h"


@interface ATVMusicStoreControlFactory : NSObject <BRControlFactory, BRControlHeightFactory> {
@private
	BOOL _forMainMenu;	// 4 = 0x4
}
+ (void)initialize;	// 0x33979ce1
+ (id)mainMenuFactory;	// 0x33979e7d
+ (void)registerPopulator:(Class)populator;	// 0x33979f65
+ (id)standardFactory;	// 0x33979dd9
- (id)initForMainMenu:(BOOL)mainMenu;	// 0x33979f25
- (id)_populatorForData:(id)data;	// 0x3397a6cd
- (id)controlForData:(id)data currentControl:(id)control requestedBy:(id)by;	// 0x3397a121
- (float)heightForControlForData:(id)data requestedBy:(id)by;	// 0x3397a49d
@end

