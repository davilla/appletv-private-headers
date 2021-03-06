/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SAAceView.h"
#import "SADeferredKeyObject.h"

@class NSString;

@interface SAUIAssistantUtteranceView : SAAceView <SADeferredKeyObject> {
}
@property(copy, nonatomic) NSString *dialogIdentifier;	// G=0x32f32ed9; S=0x32f32ef5; 
@property(copy, nonatomic) NSString *text;	// G=0x32f32f45; S=0x32f32f61; 
+ (id)assistantUtteranceView;	// 0x32f32e49
+ (id)assistantUtteranceViewWithDictionary:(id)dictionary context:(id)context;	// 0x32f32e8d
- (id)deferredKeys;	// 0x32f32fb1
// declared property getter: - (id)dialogIdentifier;	// 0x32f32ed9
- (id)encodedClassName;	// 0x32f32e3d
- (id)groupIdentifier;	// 0x32f32e2d
// declared property setter: - (void)setDialogIdentifier:(id)identifier;	// 0x32f32ef5
// declared property setter: - (void)setText:(id)text;	// 0x32f32f61
// declared property getter: - (id)text;	// 0x32f32f45
@end

