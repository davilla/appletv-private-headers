/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "AceObject.h"
#import "SAAceSerializable.h"

@class NSString;
@protocol SASupportCondition;

@interface SAConstraintSupport : AceObject <SAAceSerializable> {
}
@property(retain, nonatomic) id<SASupportCondition> condition;	// G=0x342536bd; S=0x34253711; 
@property(copy, nonatomic) NSString *property;	// G=0x3425374d; S=0x34253769; 
+ (id)constraintSupport;	// 0x3425362d
+ (id)constraintSupportWithDictionary:(id)dictionary context:(id)context;	// 0x34253671
// declared property getter: - (id)condition;	// 0x342536bd
- (id)encodedClassName;	// 0x34253621
- (id)groupIdentifier;	// 0x34253611
// declared property getter: - (id)property;	// 0x3425374d
// declared property setter: - (void)setCondition:(id)condition;	// 0x34253711
// declared property setter: - (void)setProperty:(id)property;	// 0x34253769
@end
