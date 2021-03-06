/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SAReminderPayload.h"
#import "AceObject.h"

@class NSString, NSArray;

@interface SAReminderEmailPayload : AceObject <SAReminderPayload> {
}
@property(copy, nonatomic) NSArray *recipientsTo;	// G=0x34239729; S=0x34239745; 
@property(copy, nonatomic) NSString *subject;	// G=0x34239795; S=0x342397b1; 
+ (id)emailPayload;	// 0x34239699
+ (id)emailPayloadWithDictionary:(id)dictionary context:(id)context;	// 0x342396dd
- (id)encodedClassName;	// 0x3423968d
- (id)groupIdentifier;	// 0x3423967d
// declared property getter: - (id)recipientsTo;	// 0x34239729
// declared property setter: - (void)setRecipientsTo:(id)to;	// 0x34239745
// declared property setter: - (void)setSubject:(id)subject;	// 0x342397b1
// declared property getter: - (id)subject;	// 0x34239795
@end

