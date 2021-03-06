/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

#import "DAAction.h"


@interface DAResponse : DAAction {
	int _status;	// 20 = 0x14
}
@property(readonly, assign) int status;	// G=0x3355f325; @synthesize=_status
- (id)initWithCoder:(id)coder;	// 0x3355f149
- (id)initWithItemChangeType:(int)itemChangeType changedItem:(id)item serverId:(id)anId status:(int)status;	// 0x3355f101
- (void)encodeWithCoder:(id)coder;	// 0x3355f239
// declared property getter: - (int)status;	// 0x3355f325
@end

