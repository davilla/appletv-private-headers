/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SABaseCommand.h"
#import "SAServerBoundCommand.h"

@class NSString, NSArray;

@interface SAReminderSearchCompleted : SABaseCommand <SAServerBoundCommand> {
}
@property(copy, nonatomic) NSString *aceId;	// @dynamic
@property(copy, nonatomic) NSString *refId;	// @dynamic
@property(copy, nonatomic) NSArray *results;	// G=0x3661848d; S=0x36618509; 
+ (id)searchCompleted;	// 0x366183fd
+ (id)searchCompletedWithDictionary:(id)dictionary context:(id)context;	// 0x36618441
- (id)encodedClassName;	// 0x366183f1
- (id)groupIdentifier;	// 0x366183e1
// declared property getter: - (id)results;	// 0x3661848d
// declared property setter: - (void)setResults:(id)results;	// 0x36618509
@end
