/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SABaseClientBoundCommand.h"

@class NSString, NSURL;

@interface SANoteCreate : SABaseClientBoundCommand {
}
@property(copy, nonatomic) NSString *contents;	// G=0x3422f65d; S=0x3422f679; 
@property(copy, nonatomic) NSURL *targetAppId;	// G=0x3422f581; S=0x3422f5fd; 
+ (id)create;	// 0x3422f4f1
+ (id)createWithDictionary:(id)dictionary context:(id)context;	// 0x3422f535
// declared property getter: - (id)contents;	// 0x3422f65d
- (id)encodedClassName;	// 0x3422f4e5
- (id)groupIdentifier;	// 0x3422f4d5
- (BOOL)requiresResponse;	// 0x3422f6c9
// declared property setter: - (void)setContents:(id)contents;	// 0x3422f679
// declared property setter: - (void)setTargetAppId:(id)anId;	// 0x3422f5fd
// declared property getter: - (id)targetAppId;	// 0x3422f581
@end
