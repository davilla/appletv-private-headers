/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import <NSObject.h> // Unknown library
#import "NSCoding.h"

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface CalItemMetadata : NSObject <NSCoding> {
@private
	NSDictionary *_x_props;	// 4 = 0x4
	int _classification;	// 8 = 0x8
}
@property(assign) int classification;	// G=0x32479819; S=0x32479829; @synthesize=_classification
@property(retain) NSDictionary *x_props;	// G=0x324797e1; S=0x324797f5; @synthesize=_x_props
+ (id)metadataWithData:(id)data;	// 0x32479575
+ (id)metadataWithICSComponent:(id)icscomponent;	// 0x3247952d
- (id)init;	// 0x324791cd
- (id)initWithCoder:(id)coder;	// 0x32479749
- (id)initWithICSComponent:(id)icscomponent;	// 0x32478f69
- (void)applyToComponent:(id)component;	// 0x324791e1
// declared property getter: - (int)classification;	// 0x32479819
- (id)dataRepresentationWithExistingMetaData:(id)existingMetaData;	// 0x32479329
- (void)dealloc;	// 0x3247969d
- (void)encodeWithCoder:(id)coder;	// 0x324796e9
// declared property setter: - (void)setClassification:(int)classification;	// 0x32479829
// declared property setter: - (void)setX_props:(id)props;	// 0x324797f5
// declared property getter: - (id)x_props;	// 0x324797e1
@end

