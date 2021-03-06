/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "AceObject.h"
#import "SAAceSerializable.h"

@class NSString, NSArray;

@interface SAMPSearchConstraint : AceObject <SAAceSerializable> {
}
@property(copy, nonatomic) NSString *query;	// G=0x32f4eee9; S=0x32f4ef05; 
@property(copy, nonatomic) NSArray *searchProperties;	// G=0x32f4ef55; S=0x32f4ef71; 
+ (id)searchConstraint;	// 0x32f4ee59
+ (id)searchConstraintWithDictionary:(id)dictionary context:(id)context;	// 0x32f4ee9d
- (id)encodedClassName;	// 0x32f4ee4d
- (id)groupIdentifier;	// 0x32f4ee3d
// declared property getter: - (id)query;	// 0x32f4eee9
// declared property getter: - (id)searchProperties;	// 0x32f4ef55
// declared property setter: - (void)setQuery:(id)query;	// 0x32f4ef05
// declared property setter: - (void)setSearchProperties:(id)properties;	// 0x32f4ef71
@end

