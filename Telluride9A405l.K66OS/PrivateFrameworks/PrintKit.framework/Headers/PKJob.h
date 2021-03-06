/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/PrintKit.framework/PrintKit
 */

#import <NSObject.h> // Unknown library

@class NSString, NSData, PKPrintSettings, NSDate;

@interface PKJob : NSObject {
@private
	int number;	// 4 = 0x4
	int mediaProgress;	// 8 = 0x8
	int mediaSheets;	// 12 = 0xc
	int mediaSheetsCompleted;	// 16 = 0x10
	NSString *printerDisplayName;	// 20 = 0x14
	int printerKind;	// 24 = 0x18
	NSString *printerLocation;	// 28 = 0x1c
	PKPrintSettings *settings;	// 32 = 0x20
	int state;	// 36 = 0x24
	NSDate *timeAtCompleted;	// 40 = 0x28
	NSDate *timeAtCreation;	// 44 = 0x2c
	NSDate *timeAtProcessing;	// 48 = 0x30
@protected
	NSData *thumbnailImage;	// 52 = 0x34
}
@property(assign, nonatomic) int mediaProgress;	// G=0x33d6032d; S=0x33d6033d; @synthesize
@property(assign, nonatomic) int mediaSheets;	// G=0x33d6030d; S=0x33d6031d; @synthesize
@property(assign, nonatomic) int mediaSheetsCompleted;	// G=0x33d602ed; S=0x33d602fd; @synthesize
@property(assign, nonatomic) int number;	// G=0x33d6034d; S=0x33d6035d; @synthesize
@property(retain, nonatomic) NSString *printerDisplayName;	// G=0x33d602dd; S=0x33d6098d; @synthesize
@property(assign, nonatomic) int printerKind;	// G=0x33d602bd; S=0x33d602cd; @synthesize
@property(retain, nonatomic) NSString *printerLocation;	// G=0x33d602ad; S=0x33d60965; @synthesize
@property(retain, nonatomic) PKPrintSettings *settings;	// G=0x33d6029d; S=0x33d6093d; @synthesize
@property(assign, nonatomic) int state;	// G=0x33d6027d; S=0x33d6028d; @synthesize
@property(retain, nonatomic) NSData *thumbnailImage;	// G=0x33d6023d; S=0x33d6089d; @synthesize
@property(retain, nonatomic) NSDate *timeAtCompleted;	// G=0x33d6026d; S=0x33d60915; @synthesize
@property(retain, nonatomic) NSDate *timeAtCreation;	// G=0x33d6025d; S=0x33d608ed; @synthesize
@property(retain, nonatomic) NSDate *timeAtProcessing;	// G=0x33d6024d; S=0x33d608c5; @synthesize
+ (id)currentJob;	// 0x33d60d09
+ (id)jobs;	// 0x33d61325
- (int)cancel;	// 0x33d6036d
// declared property getter: - (int)mediaProgress;	// 0x33d6032d
// declared property getter: - (int)mediaSheets;	// 0x33d6030d
// declared property getter: - (int)mediaSheetsCompleted;	// 0x33d602ed
// declared property getter: - (int)number;	// 0x33d6034d
// declared property getter: - (id)printerDisplayName;	// 0x33d602dd
// declared property getter: - (int)printerKind;	// 0x33d602bd
// declared property getter: - (id)printerLocation;	// 0x33d602ad
// declared property setter: - (void)setMediaProgress:(int)progress;	// 0x33d6033d
// declared property setter: - (void)setMediaSheets:(int)sheets;	// 0x33d6031d
// declared property setter: - (void)setMediaSheetsCompleted:(int)completed;	// 0x33d602fd
// declared property setter: - (void)setNumber:(int)number;	// 0x33d6035d
// declared property setter: - (void)setPrinterDisplayName:(id)name;	// 0x33d6098d
// declared property setter: - (void)setPrinterKind:(int)kind;	// 0x33d602cd
// declared property setter: - (void)setPrinterLocation:(id)location;	// 0x33d60965
// declared property setter: - (void)setSettings:(id)settings;	// 0x33d6093d
// declared property setter: - (void)setState:(int)state;	// 0x33d6028d
// declared property setter: - (void)setThumbnailImage:(id)image;	// 0x33d6089d
// declared property setter: - (void)setTimeAtCompleted:(id)completed;	// 0x33d60915
// declared property setter: - (void)setTimeAtCreation:(id)creation;	// 0x33d608ed
// declared property setter: - (void)setTimeAtProcessing:(id)processing;	// 0x33d608c5
// declared property getter: - (id)settings;	// 0x33d6029d
// declared property getter: - (int)state;	// 0x33d6027d
// declared property getter: - (id)thumbnailImage;	// 0x33d6023d
// declared property getter: - (id)timeAtCompleted;	// 0x33d6026d
// declared property getter: - (id)timeAtCreation;	// 0x33d6025d
// declared property getter: - (id)timeAtProcessing;	// 0x33d6024d
- (int)update;	// 0x33d6052d
@end

