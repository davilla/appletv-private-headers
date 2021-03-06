/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "AceObject.h"
#import "SAAceSerializable.h"

@class NSDictionary;

@interface SALocalSearchOperationHours : AceObject <SAAceSerializable> {
}
@property(copy, nonatomic) NSDictionary *operationPeriods;	// G=0x342642b1; S=0x34264385; 
+ (id)operationHours;	// 0x34264221
+ (id)operationHoursWithDictionary:(id)dictionary context:(id)context;	// 0x34264265
- (id)encodedClassName;	// 0x34264215
- (id)groupIdentifier;	// 0x34264205
// declared property getter: - (id)operationPeriods;	// 0x342642b1
// declared property setter: - (void)setOperationPeriods:(id)periods;	// 0x34264385
@end

