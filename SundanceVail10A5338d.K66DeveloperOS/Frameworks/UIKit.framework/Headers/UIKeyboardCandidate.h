/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "NSCopying.h"
#import "UIKit-Structs.h"
#import <NSObject.h> // Unknown library

@class NSString;

@interface UIKeyboardCandidate : NSObject <NSCopying> {
	NSString *_alternativeText;	// 4 = 0x4
	NSString *_accessibilityLabel;	// 8 = 0x8
}
@property(readonly, assign, nonatomic) NSString *accessibilityLabel;	// G=0x30ef3759; @synthesize=_accessibilityLabel
@property(copy, nonatomic) NSString *alternativeText;	// G=0x30ef38f5; S=0x30ef3909; @synthesize=_alternativeText
@property(readonly, assign, nonatomic) NSString *candidate;	// G=0x30ef373d; 
@property(readonly, assign, nonatomic) unsigned deleteCount;	// G=0x30ef3755; 
@property(readonly, assign, nonatomic, getter=isExtensionCandidate) BOOL extensionCandidate;	// G=0x30ef38f1; 
@property(readonly, assign, nonatomic) NSString *input;	// G=0x30ef3741; 
@property(readonly, assign, nonatomic) BOOL isAutocorrection;	// G=0x30ef38ed; 
@property(readonly, assign, nonatomic) BOOL isForShortcutConversion;	// G=0x30d5c1c1; 
@property(readonly, assign, nonatomic) NSString *label;	// G=0x30ef3745; 
@property(readonly, assign, nonatomic) unsigned wordOriginFeedbackID;	// G=0x30d010f9; 
// declared property getter: - (id)accessibilityLabel;	// 0x30ef3759
// declared property getter: - (id)alternativeText;	// 0x30ef38f5
// declared property getter: - (id)candidate;	// 0x30ef373d
- (id)copyWithZone:(NSZone *)zone;	// 0x30ef37f5
- (void)dealloc;	// 0x30ef36d9
// declared property getter: - (unsigned)deleteCount;	// 0x30ef3755
- (unsigned)hash;	// 0x30ef38c5
// declared property getter: - (id)input;	// 0x30ef3741
// declared property getter: - (BOOL)isAutocorrection;	// 0x30ef38ed
- (BOOL)isEqual:(id)equal;	// 0x30ef3829
// declared property getter: - (BOOL)isExtensionCandidate;	// 0x30ef38f1
// declared property getter: - (BOOL)isForShortcutConversion;	// 0x30d5c1c1
// declared property getter: - (id)label;	// 0x30ef3745
// declared property setter: - (void)setAlternativeText:(id)text;	// 0x30ef3909
// declared property getter: - (unsigned)wordOriginFeedbackID;	// 0x30d010f9
@end
