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
+ (void)initialize;	// 0x3074b3b9
+ (id)mainMenuFactory;	// 0x3074ba81
+ (void)registerPopulator:(Class)populator;	// 0x3074b7f9
+ (id)standardFactory;	// 0x3074ba25
- (id)initForMainMenu:(BOOL)mainMenu;	// 0x3074b12d
- (id)_populatorForData:(id)data;	// 0x3074b94d
- (id)controlForData:(id)data currentControl:(id)control requestedBy:(id)by;	// 0x3074b4a1
- (float)heightForControlForData:(id)data requestedBy:(id)by;	// 0x3074b169
@end

