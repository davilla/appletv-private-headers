/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SABaseCommand.h"
#import "SAServerBoundCommand.h"

@class NSString, NSArray;

@interface SASmsSearchCompleted : SABaseCommand <SAServerBoundCommand> {
}
@property(copy, nonatomic) NSString *aceId;	// @dynamic
@property(copy, nonatomic) NSString *refId;	// @dynamic
@property(copy, nonatomic) NSArray *results;	// G=0x342276ad; S=0x3422774d; 
+ (id)searchCompleted;	// 0x342275a1
+ (id)searchCompletedWithDictionary:(id)dictionary context:(id)context;	// 0x342275e5
+ (id)searchCompletedWithResults:(id)results;	// 0x34227631
- (id)initWithResults:(id)results;	// 0x34227679
- (id)encodedClassName;	// 0x34227595
- (id)groupIdentifier;	// 0x34227585
// declared property getter: - (id)results;	// 0x342276ad
// declared property setter: - (void)setResults:(id)results;	// 0x3422774d
@end
