/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library

@class NSDictionary, NSString, NSBundle, NSMutableDictionary;

@interface UIStoryboard : NSObject {
	NSBundle *bundle;	// 4 = 0x4
	NSString *storyboardFileName;	// 8 = 0x8
	NSDictionary *identifierToNibNameMap;	// 12 = 0xc
	NSString *designatedEntryPointIdentifier;	// 16 = 0x10
	NSMutableDictionary *identifierToUINibMap;	// 20 = 0x14
}
@property(readonly, assign, nonatomic) NSBundle *bundle;	// G=0x33d611d1; @synthesize
@property(readonly, assign, nonatomic) NSString *designatedEntryPointIdentifier;	// G=0x33d61201; @synthesize
@property(readonly, assign, nonatomic) NSDictionary *identifierToNibNameMap;	// G=0x33d611f1; @synthesize
@property(readonly, assign, nonatomic) NSMutableDictionary *identifierToUINibMap;	// G=0x33d61211; @synthesize
@property(readonly, assign) NSString *name;	// G=0x33d60c49; 
@property(readonly, assign, nonatomic) NSString *storyboardFileName;	// G=0x33d611e1; @synthesize
+ (id)storyboardWithName:(id)name bundle:(id)bundle;	// 0x33d609d5
- (id)initWithBundle:(id)bundle storyboardFileName:(id)name identifierToNibNameMap:(id)nibNameMap designatedEntryPointIdentifier:(id)identifier;	// 0x33d607a5
// declared property getter: - (id)bundle;	// 0x33d611d1
- (BOOL)containsNibNamed:(id)named;	// 0x33d60c71
- (void)dealloc;	// 0x33d60705
// declared property getter: - (id)designatedEntryPointIdentifier;	// 0x33d61201
- (id)identifierForStringsFile;	// 0x33d60ccd
// declared property getter: - (id)identifierToNibNameMap;	// 0x33d611f1
// declared property getter: - (id)identifierToUINibMap;	// 0x33d61211
- (id)instantiateInitialViewController;	// 0x33d61191
- (id)instantiateViewControllerWithIdentifier:(id)identifier;	// 0x33d60fb1
// declared property getter: - (id)name;	// 0x33d60c49
- (id)nibForStoryboardNibNamed:(id)storyboardNibNamed;	// 0x33d60d1d
- (id)nibForViewControllerWithIdentifier:(id)identifier;	// 0x33d60e49
// declared property getter: - (id)storyboardFileName;	// 0x33d611e1
@end
