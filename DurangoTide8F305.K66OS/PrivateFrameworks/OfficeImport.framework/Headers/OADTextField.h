/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OADTextRun.h"

@class OADParagraphProperties, NSString;

__attribute__((visibility("hidden")))
@interface OADTextField : OADTextRun {
@private
	OADParagraphProperties *mParagraphProperties;	// 8 = 0x8
	NSString *mId;	// 12 = 0xc
	NSString *mText;	// 16 = 0x10
}
@property(retain) id id;	// G=0x34591c49; S=0x3452afe1; converted property
@property(retain) id text;	// G=0x34439cb5; S=0x34446bdd; converted property
- (id)init;	// 0x3444659d
- (void)dealloc;	// 0x3445dad9
// converted property getter: - (id)id;	// 0x34591c49
- (BOOL)isEmpty;	// 0x34439cc5
- (id)paragraphProperties;	// 0x3452b019
- (void)removeUnnecessaryOverrides;	// 0x3444c085
// converted property setter: - (void)setId:(id)anId;	// 0x3452afe1
// converted property setter: - (void)setText:(id)text;	// 0x34446bdd
// converted property getter: - (id)text;	// 0x34439cb5
@end

