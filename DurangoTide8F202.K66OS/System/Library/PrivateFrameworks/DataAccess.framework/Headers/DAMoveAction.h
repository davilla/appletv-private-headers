/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

#import "DAAction.h"

@class NSString;

@interface DAMoveAction : DAAction {
	NSString *_oldContainerId;	// 16 = 0x10
	NSString *_oldServerId;	// 20 = 0x14
	NSString *_newContainerId;	// 24 = 0x18
}
@property(readonly, assign) NSString *newContainerId;	// G=0x31eb5dbd; @synthesize=_newContainerId
@property(readonly, assign) NSString *oldContainerId;	// G=0x31eb5ddd; @synthesize=_oldContainerId
@property(readonly, assign) NSString *oldServerId;	// G=0x31eb5dcd; @synthesize=_oldServerId
- (id)initWithAction:(int)action context:(id)context oldContainerId:(id)anId oldServerId:(id)anId4 newContainerId:(id)anId5;	// 0x31eb6541
- (id)initWithCoder:(id)coder;	// 0x31eb6395
- (void)dealloc;	// 0x31eb64d5
- (void)encodeWithCoder:(id)coder;	// 0x31eb6285
// declared property getter: - (id)newContainerId;	// 0x31eb5dbd
// declared property getter: - (id)oldContainerId;	// 0x31eb5ddd
// declared property getter: - (id)oldServerId;	// 0x31eb5dcd
@end

