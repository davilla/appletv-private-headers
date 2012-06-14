/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SASupportCondition.h"
#import "AceObject.h"

@class NSArray;

@interface SAAndCondition : AceObject <SASupportCondition> {
}
@property(copy, nonatomic) NSArray *conditions;	// G=0x32f5dfa9; S=0x32f5e011; 
+ (id)andCondition;	// 0x32f5df19
+ (id)andConditionWithDictionary:(id)dictionary context:(id)context;	// 0x32f5df5d
// declared property getter: - (id)conditions;	// 0x32f5dfa9
- (id)encodedClassName;	// 0x32f5df0d
- (id)groupIdentifier;	// 0x32f5defd
// declared property setter: - (void)setConditions:(id)conditions;	// 0x32f5e011
@end
