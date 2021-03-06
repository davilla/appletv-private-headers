/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/PrintKit.framework/PrintKit
 */

#import <NSObject.h> // Unknown library

@class NSString, PKPrintSettings, NSDate, NSData;

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
@property(assign, nonatomic) int mediaProgress;	// G=0x31003e59; S=0x31003e69; @synthesize
@property(assign, nonatomic) int mediaSheets;	// G=0x31003e39; S=0x31003e49; @synthesize
@property(assign, nonatomic) int mediaSheetsCompleted;	// G=0x31003e19; S=0x31003e29; @synthesize
@property(assign, nonatomic) int number;	// G=0x31003e79; S=0x31003e89; @synthesize
@property(retain, nonatomic) NSString *printerDisplayName;	// G=0x31003e09; S=0x310044b9; @synthesize
@property(assign, nonatomic) int printerKind;	// G=0x31003de9; S=0x31003df9; @synthesize
@property(retain, nonatomic) NSString *printerLocation;	// G=0x31003dd9; S=0x31004491; @synthesize
@property(retain, nonatomic) PKPrintSettings *settings;	// G=0x31003dc9; S=0x31004469; @synthesize
@property(assign, nonatomic) int state;	// G=0x31003da9; S=0x31003db9; @synthesize
@property(retain, nonatomic) NSData *thumbnailImage;	// G=0x31003d69; S=0x310043c9; @synthesize
@property(retain, nonatomic) NSDate *timeAtCompleted;	// G=0x31003d99; S=0x31004441; @synthesize
@property(retain, nonatomic) NSDate *timeAtCreation;	// G=0x31003d89; S=0x31004419; @synthesize
@property(retain, nonatomic) NSDate *timeAtProcessing;	// G=0x31003d79; S=0x310043f1; @synthesize
+ (id)currentJob;	// 0x31004835
+ (id)jobs;	// 0x31004e51
- (int)cancel;	// 0x31003e99
// declared property getter: - (int)mediaProgress;	// 0x31003e59
// declared property getter: - (int)mediaSheets;	// 0x31003e39
// declared property getter: - (int)mediaSheetsCompleted;	// 0x31003e19
// declared property getter: - (int)number;	// 0x31003e79
// declared property getter: - (id)printerDisplayName;	// 0x31003e09
// declared property getter: - (int)printerKind;	// 0x31003de9
// declared property getter: - (id)printerLocation;	// 0x31003dd9
// declared property setter: - (void)setMediaProgress:(int)progress;	// 0x31003e69
// declared property setter: - (void)setMediaSheets:(int)sheets;	// 0x31003e49
// declared property setter: - (void)setMediaSheetsCompleted:(int)completed;	// 0x31003e29
// declared property setter: - (void)setNumber:(int)number;	// 0x31003e89
// declared property setter: - (void)setPrinterDisplayName:(id)name;	// 0x310044b9
// declared property setter: - (void)setPrinterKind:(int)kind;	// 0x31003df9
// declared property setter: - (void)setPrinterLocation:(id)location;	// 0x31004491
// declared property setter: - (void)setSettings:(id)settings;	// 0x31004469
// declared property setter: - (void)setState:(int)state;	// 0x31003db9
// declared property setter: - (void)setThumbnailImage:(id)image;	// 0x310043c9
// declared property setter: - (void)setTimeAtCompleted:(id)completed;	// 0x31004441
// declared property setter: - (void)setTimeAtCreation:(id)creation;	// 0x31004419
// declared property setter: - (void)setTimeAtProcessing:(id)processing;	// 0x310043f1
// declared property getter: - (id)settings;	// 0x31003dc9
// declared property getter: - (int)state;	// 0x31003da9
// declared property getter: - (id)thumbnailImage;	// 0x31003d69
// declared property getter: - (id)timeAtCompleted;	// 0x31003d99
// declared property getter: - (id)timeAtCreation;	// 0x31003d89
// declared property getter: - (id)timeAtProcessing;	// 0x31003d79
- (int)update;	// 0x31004059
@end

