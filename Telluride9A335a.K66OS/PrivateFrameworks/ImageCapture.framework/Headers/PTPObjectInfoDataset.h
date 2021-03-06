/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

#import <NSObject.h> // Unknown library

@class NSString;

@interface PTPObjectInfoDataset : NSObject {
	unsigned _storageID;	// 4 = 0x4
	unsigned short _objectFormat;	// 8 = 0x8
	unsigned short _protectionStatus;	// 10 = 0xa
	unsigned long long _objectCompressedSize;	// 12 = 0xc
	unsigned short _thumbFormat;	// 20 = 0x14
	unsigned _thumbCompressedSize;	// 24 = 0x18
	unsigned _thumbOffset;	// 28 = 0x1c
	unsigned _thumbPixWidth;	// 32 = 0x20
	unsigned _thumbPixHeight;	// 36 = 0x24
	unsigned _imagePixWidth;	// 40 = 0x28
	unsigned _imagePixHeight;	// 44 = 0x2c
	unsigned _imageBitDepth;	// 48 = 0x30
	unsigned _parentObject;	// 52 = 0x34
	unsigned short _associationType;	// 56 = 0x38
	unsigned _associationDesc;	// 60 = 0x3c
	unsigned _sequenceNumber;	// 64 = 0x40
	NSString *_filename;	// 68 = 0x44
	NSString *_captureDate;	// 72 = 0x48
	NSString *_modificationDate;	// 76 = 0x4c
	NSString *_keywords;	// 80 = 0x50
	unsigned _thmFileSize;	// 84 = 0x54
	unsigned _objectHandle;	// 88 = 0x58
}
@property(assign) unsigned long associationDesc;	// G=0x36de5351; S=0x36de5361; converted property
@property(assign) unsigned short associationType;	// G=0x36de5331; S=0x36de5341; converted property
@property(retain) NSString *captureDate;	// G=0x36de53a1; S=0x36de54ad; converted property
@property(retain) NSString *filename;	// G=0x36de5391; S=0x36de552d; converted property
@property(assign) unsigned long imageBitDepth;	// G=0x36de52f1; S=0x36de5301; converted property
@property(assign) unsigned long imagePixHeight;	// G=0x36de52d1; S=0x36de52e1; converted property
@property(assign) unsigned long imagePixWidth;	// G=0x36de52b1; S=0x36de52c1; converted property
@property(retain) NSString *keywords;	// G=0x36de53c1; S=0x36de541d; converted property
@property(retain) NSString *modificationDate;	// G=0x36de53b1; S=0x36de5465; converted property
@property(assign) unsigned short objectFormat;	// G=0x36de5165; S=0x36de5175; converted property
@property(assign) unsigned long objectHandle;	// G=0x36de53d1; S=0x36de53e1; converted property
@property(assign) unsigned long parentObject;	// G=0x36de5311; S=0x36de5321; converted property
@property(assign) unsigned short protectionStatus;	// G=0x36de5185; S=0x36de5195; converted property
@property(assign) unsigned long sequenceNumber;	// G=0x36de5371; S=0x36de5381; converted property
@property(assign) unsigned long storageID;	// G=0x36de5145; S=0x36de5155; converted property
@property(assign) unsigned long thmFileSize;	// G=0x36de5231; S=0x36de5241; converted property
@property(assign) unsigned long thumbCompressedSize;	// G=0x36de5211; S=0x36de5221; converted property
@property(assign) unsigned short thumbFormat;	// G=0x36de51f1; S=0x36de5201; converted property
@property(assign) unsigned long thumbOffset;	// G=0x36de5251; S=0x36de5261; converted property
@property(assign) unsigned long thumbPixHeight;	// G=0x36de5291; S=0x36de52a1; converted property
@property(assign) unsigned long thumbPixWidth;	// G=0x36de5271; S=0x36de5281; converted property
- (id)init;	// 0x36de53f1
- (id)initWithData64:(id)data64;	// 0x36de5cf1
- (id)initWithData:(id)data;	// 0x36de6011
// converted property getter: - (unsigned long)associationDesc;	// 0x36de5351
// converted property getter: - (unsigned short)associationType;	// 0x36de5331
// converted property getter: - (id)captureDate;	// 0x36de53a1
- (id)content;	// 0x36de59d5
- (id)content64;	// 0x36de574d
- (void)dealloc;	// 0x36de5c69
- (id)description;	// 0x36de5575
// converted property getter: - (id)filename;	// 0x36de5391
// converted property getter: - (unsigned long)imageBitDepth;	// 0x36de52f1
// converted property getter: - (unsigned long)imagePixHeight;	// 0x36de52d1
// converted property getter: - (unsigned long)imagePixWidth;	// 0x36de52b1
// converted property getter: - (id)keywords;	// 0x36de53c1
// converted property getter: - (id)modificationDate;	// 0x36de53b1
- (unsigned long)objectCompressedSize;	// 0x36de51bd
- (unsigned long long)objectCompressedSize64;	// 0x36de51a5
// converted property getter: - (unsigned short)objectFormat;	// 0x36de5165
// converted property getter: - (unsigned long)objectHandle;	// 0x36de53d1
// converted property getter: - (unsigned long)parentObject;	// 0x36de5311
// converted property getter: - (unsigned short)protectionStatus;	// 0x36de5185
// converted property getter: - (unsigned long)sequenceNumber;	// 0x36de5371
// converted property setter: - (void)setAssociationDesc:(unsigned long)desc;	// 0x36de5361
// converted property setter: - (void)setAssociationType:(unsigned short)type;	// 0x36de5341
// converted property setter: - (void)setCaptureDate:(id)date;	// 0x36de54ad
// converted property setter: - (void)setFilename:(id)filename;	// 0x36de552d
// converted property setter: - (void)setImageBitDepth:(unsigned long)depth;	// 0x36de5301
// converted property setter: - (void)setImagePixHeight:(unsigned long)height;	// 0x36de52e1
// converted property setter: - (void)setImagePixWidth:(unsigned long)width;	// 0x36de52c1
// converted property setter: - (void)setKeywords:(id)keywords;	// 0x36de541d
// converted property setter: - (void)setModificationDate:(id)date;	// 0x36de5465
- (void)setObjectCompressedSize:(unsigned long long)size;	// 0x36de51dd
// converted property setter: - (void)setObjectFormat:(unsigned short)format;	// 0x36de5175
// converted property setter: - (void)setObjectHandle:(unsigned long)handle;	// 0x36de53e1
// converted property setter: - (void)setParentObject:(unsigned long)object;	// 0x36de5321
// converted property setter: - (void)setProtectionStatus:(unsigned short)status;	// 0x36de5195
// converted property setter: - (void)setSequenceNumber:(unsigned long)number;	// 0x36de5381
// converted property setter: - (void)setStorageID:(unsigned long)anId;	// 0x36de5155
// converted property setter: - (void)setThmFileSize:(unsigned long)size;	// 0x36de5241
// converted property setter: - (void)setThumbCompressedSize:(unsigned long)size;	// 0x36de5221
// converted property setter: - (void)setThumbFormat:(unsigned short)format;	// 0x36de5201
// converted property setter: - (void)setThumbOffset:(unsigned long)offset;	// 0x36de5261
// converted property setter: - (void)setThumbPixHeight:(unsigned long)height;	// 0x36de52a1
// converted property setter: - (void)setThumbPixWidth:(unsigned long)width;	// 0x36de5281
// converted property getter: - (unsigned long)storageID;	// 0x36de5145
// converted property getter: - (unsigned long)thmFileSize;	// 0x36de5231
// converted property getter: - (unsigned long)thumbCompressedSize;	// 0x36de5211
// converted property getter: - (unsigned short)thumbFormat;	// 0x36de51f1
// converted property getter: - (unsigned long)thumbOffset;	// 0x36de5251
// converted property getter: - (unsigned long)thumbPixHeight;	// 0x36de5291
// converted property getter: - (unsigned long)thumbPixWidth;	// 0x36de5271
@end

