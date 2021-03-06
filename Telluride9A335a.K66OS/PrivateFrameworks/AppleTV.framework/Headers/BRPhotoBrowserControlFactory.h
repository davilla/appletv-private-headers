/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library
#import "BRControlFactory.h"
#import "BRControlHeightFactory.h"

@protocol BRSelectionHandler;

__attribute__((visibility("hidden")))
@interface BRPhotoBrowserControlFactory : NSObject <BRControlFactory, BRControlHeightFactory> {
@private
	id<BRSelectionHandler> _handler;	// 4 = 0x4
}
- (id)controlForData:(id)data currentControl:(id)control requestedBy:(id)by;	// 0x34251b35
- (void)dealloc;	// 0x34251aa9
- (float)heightForControlForData:(id)data requestedBy:(id)by;	// 0x34251c25
- (void)setSelectionHandler:(id)handler;	// 0x34251af5
@end

