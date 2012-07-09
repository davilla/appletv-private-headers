/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "OfficeImport-Structs.h"


@interface WDRubyProperties : NSObject {
	unsigned mOriginal : 1;	// 4 = 0x4
	XXStruct_RPYF6B *mOriginalProperties;	// 8 = 0x8
}
@property(assign, nonatomic) int alignment;	// G=0x33c084e5; S=0x33c08505; 
@property(assign, nonatomic) unsigned short baseFontSize;	// G=0x33c08615; S=0x33c08635; 
@property(assign, nonatomic) unsigned short distanceBetween;	// G=0x33c086ad; S=0x33c086cd; 
@property(assign, nonatomic) unsigned short phoneticGuideFontSize;	// G=0x33c0857d; S=0x33c0859d; 
@property(assign, nonatomic) int phoneticGuideLanguage;	// G=0x33c08745; S=0x33c08765; 
- (id)init;	// 0x33c08439
// declared property getter: - (int)alignment;	// 0x33c084e5
// declared property getter: - (unsigned short)baseFontSize;	// 0x33c08615
- (void)clearAlignment;	// 0x33c08565
- (void)clearBaseFontSize;	// 0x33c08695
- (void)clearDistanceBetween;	// 0x33c0872d
- (void)clearPhoneticGuideFontSize;	// 0x33c085fd
- (void)clearPhoneticGuideLanguage;	// 0x33c087c5
- (void)dealloc;	// 0x33c08479
// declared property getter: - (unsigned short)distanceBetween;	// 0x33c086ad
- (BOOL)isAlignmentOverridden;	// 0x33c08545
- (BOOL)isAnythingOverridden;	// 0x33c084c1
- (BOOL)isAnythingOverriddenIn:(XXStruct_RPYF6B *)anIn;	// 0x33c087e1
- (BOOL)isBaseFontSizeOverridden;	// 0x33c08675
- (BOOL)isDistanceBetweenOverridden;	// 0x33c0870d
- (BOOL)isPhoneticGuideFontSizeOverridden;	// 0x33c085dd
- (BOOL)isPhoneticGuideLanguageOverridden;	// 0x33c087a5
// declared property getter: - (unsigned short)phoneticGuideFontSize;	// 0x33c0857d
// declared property getter: - (int)phoneticGuideLanguage;	// 0x33c08745
// declared property setter: - (void)setAlignment:(int)alignment;	// 0x33c08505
// declared property setter: - (void)setBaseFontSize:(unsigned short)size;	// 0x33c08635
// declared property setter: - (void)setDistanceBetween:(unsigned short)between;	// 0x33c086cd
// declared property setter: - (void)setPhoneticGuideFontSize:(unsigned short)size;	// 0x33c0859d
// declared property setter: - (void)setPhoneticGuideLanguage:(int)language;	// 0x33c08765
@end
