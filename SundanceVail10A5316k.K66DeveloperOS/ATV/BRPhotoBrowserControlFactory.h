/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRControlFactory.h"
#import "BRControlHeightFactory.h"
#import <XXUnknownSuperclass.h> // Unknown library

@protocol BRSelectionHandler;

__attribute__((visibility("hidden")))
@interface BRPhotoBrowserControlFactory : XXUnknownSuperclass <BRControlFactory, BRControlHeightFactory> {
	id<BRSelectionHandler> _handler;	// 4 = 0x4
}
- (id)controlForData:(id)data currentControl:(id)control requestedBy:(id)by;	// 0x312199
- (void)dealloc;	// 0x312111
- (float)heightForControlForData:(id)data requestedBy:(id)by;	// 0x312289
- (void)setSelectionHandler:(id)handler;	// 0x31215d
@end
