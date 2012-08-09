/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SAServerBoundCommand.h"
#import "SABaseCommand.h"

@class NSString;

@interface SARollbackRequest : SABaseCommand <SAServerBoundCommand> {
}
@property(copy, nonatomic) NSString *aceId;	// @dynamic
@property(copy, nonatomic) NSString *refId;	// @dynamic
@property(copy, nonatomic) NSString *requestId;	// G=0x36625e1d; S=0x36625e39; 
+ (id)rollbackRequest;	// 0x36625d8d
+ (id)rollbackRequestWithDictionary:(id)dictionary context:(id)context;	// 0x36625dd1
- (id)encodedClassName;	// 0x36625d81
- (id)groupIdentifier;	// 0x36625d71
// declared property getter: - (id)requestId;	// 0x36625e1d
// declared property setter: - (void)setRequestId:(id)anId;	// 0x36625e39
@end
