/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SAAceView.h"

@class NSString, NSArray;

@interface SAUIConfirmationView : SAAceView {
}
@property(copy, nonatomic) NSString *cancelTrigger;	// G=0x379748ad; S=0x379748c9; 
@property(copy, nonatomic) NSArray *confirmCommands;	// G=0x37974919; S=0x37974981; 
@property(copy, nonatomic) NSString *confirmText;	// G=0x379749e9; S=0x37974a05; 
@property(copy, nonatomic) NSArray *denyCommands;	// G=0x37974a55; S=0x37974abd; 
@property(copy, nonatomic) NSString *denyText;	// G=0x37974b25; S=0x37974b41; 
+ (id)confirmationView;	// 0x3797481d
+ (id)confirmationViewWithDictionary:(id)dictionary context:(id)context;	// 0x37974861
// declared property getter: - (id)cancelTrigger;	// 0x379748ad
// declared property getter: - (id)confirmCommands;	// 0x37974919
// declared property getter: - (id)confirmText;	// 0x379749e9
// declared property getter: - (id)denyCommands;	// 0x37974a55
// declared property getter: - (id)denyText;	// 0x37974b25
- (id)encodedClassName;	// 0x37974811
- (id)groupIdentifier;	// 0x37974801
// declared property setter: - (void)setCancelTrigger:(id)trigger;	// 0x379748c9
// declared property setter: - (void)setConfirmCommands:(id)commands;	// 0x37974981
// declared property setter: - (void)setConfirmText:(id)text;	// 0x37974a05
// declared property setter: - (void)setDenyCommands:(id)commands;	// 0x37974abd
// declared property setter: - (void)setDenyText:(id)text;	// 0x37974b41
@end

