/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SABaseClientBoundCommand.h"

@class NSString;

@interface SASessionValidationFailed : SABaseClientBoundCommand {
}
@property(copy, nonatomic) NSString *errorCode;	// G=0x32f56a35; S=0x32f56a51; 
+ (id)sessionValidationFailed;	// 0x32f569a5
+ (id)sessionValidationFailedWithDictionary:(id)dictionary context:(id)context;	// 0x32f569e9
- (id)encodedClassName;	// 0x32f56999
// declared property getter: - (id)errorCode;	// 0x32f56a35
- (id)groupIdentifier;	// 0x32f56989
- (BOOL)requiresResponse;	// 0x32f56aa1
// declared property setter: - (void)setErrorCode:(id)code;	// 0x32f56a51
@end

