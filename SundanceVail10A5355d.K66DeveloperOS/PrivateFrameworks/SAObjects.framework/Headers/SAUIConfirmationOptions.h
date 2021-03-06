/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "AceObject.h"
#import "SAAceSerializable.h"

@class NSString, NSArray;

@interface SAUIConfirmationOptions : AceObject <SAAceSerializable> {
}
@property(copy, nonatomic) NSString *cancelTrigger;	// G=0x366059a5; S=0x366059c1; 
@property(copy, nonatomic) NSArray *confirmCommands;	// G=0x36605a11; S=0x36605a79; 
@property(copy, nonatomic) NSString *confirmText;	// G=0x36605ae1; S=0x36605afd; 
@property(copy, nonatomic) NSArray *denyCommands;	// G=0x36605b4d; S=0x36605bb5; 
@property(copy, nonatomic) NSString *denyText;	// G=0x36605c1d; S=0x36605c39; 
+ (id)confirmationOptions;	// 0x36605915
+ (id)confirmationOptionsWithDictionary:(id)dictionary context:(id)context;	// 0x36605959
// declared property getter: - (id)cancelTrigger;	// 0x366059a5
// declared property getter: - (id)confirmCommands;	// 0x36605a11
// declared property getter: - (id)confirmText;	// 0x36605ae1
// declared property getter: - (id)denyCommands;	// 0x36605b4d
// declared property getter: - (id)denyText;	// 0x36605c1d
- (id)encodedClassName;	// 0x36605909
- (id)groupIdentifier;	// 0x366058f9
// declared property setter: - (void)setCancelTrigger:(id)trigger;	// 0x366059c1
// declared property setter: - (void)setConfirmCommands:(id)commands;	// 0x36605a79
// declared property setter: - (void)setConfirmText:(id)text;	// 0x36605afd
// declared property setter: - (void)setDenyCommands:(id)commands;	// 0x36605bb5
// declared property setter: - (void)setDenyText:(id)text;	// 0x36605c39
@end

