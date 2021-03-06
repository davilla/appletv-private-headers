/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SABaseClientBoundCommand.h"

@class NSURL;

@interface SATimerGet : SABaseClientBoundCommand {
}
@property(copy, nonatomic) NSURL *targetAppId;	// G=0x34232fa5; S=0x34233021; 
+ (id)get;	// 0x34232f15
+ (id)getWithDictionary:(id)dictionary context:(id)context;	// 0x34232f59
- (id)encodedClassName;	// 0x34232f09
- (id)groupIdentifier;	// 0x34232ef9
- (BOOL)requiresResponse;	// 0x34233081
// declared property setter: - (void)setTargetAppId:(id)anId;	// 0x34233021
// declared property getter: - (id)targetAppId;	// 0x34232fa5
@end

