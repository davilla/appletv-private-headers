/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import <PBCodable.h> // Unknown library

@class GMMProjectionProperties, GMMModel, GMMAnnotationProperties, GMMDataProperties;

@interface GMMStreetViewMetadata : PBCodable {
@private
	GMMProjectionProperties *_projectionProperties;	// 4 = 0x4
	GMMAnnotationProperties *_annotationProperties;	// 8 = 0x8
	GMMModel *_model;	// 12 = 0xc
	GMMDataProperties *_dataProperties;	// 16 = 0x10
}
@property(retain, nonatomic) GMMAnnotationProperties *annotationProperties;	// G=0x34435efd; S=0x344364cd; @synthesize=_annotationProperties
@property(retain, nonatomic) GMMDataProperties *dataProperties;	// G=0x34435edd; S=0x3443651d; @synthesize=_dataProperties
@property(readonly, assign, nonatomic) BOOL hasModel;	// G=0x34435ec9; 
@property(retain, nonatomic) GMMModel *model;	// G=0x34435eed; S=0x344364f5; @synthesize=_model
@property(retain, nonatomic) GMMProjectionProperties *projectionProperties;	// G=0x34435f0d; S=0x344364a5; @synthesize=_projectionProperties
- (id)init;	// 0x34435f1d
// declared property getter: - (id)annotationProperties;	// 0x34435efd
// declared property getter: - (id)dataProperties;	// 0x34435edd
- (void)dealloc;	// 0x34436425
- (id)description;	// 0x34436025
- (id)dictionaryRepresentation;	// 0x34435f49
// declared property getter: - (BOOL)hasModel;	// 0x34435ec9
// declared property getter: - (id)model;	// 0x34435eed
// declared property getter: - (id)projectionProperties;	// 0x34435f0d
- (BOOL)readFrom:(id)from;	// 0x3443625d
// declared property setter: - (void)setAnnotationProperties:(id)properties;	// 0x344364cd
// declared property setter: - (void)setDataProperties:(id)properties;	// 0x3443651d
// declared property setter: - (void)setModel:(id)model;	// 0x344364f5
// declared property setter: - (void)setProjectionProperties:(id)properties;	// 0x344364a5
- (void)writeTo:(id)to;	// 0x3443616d
@end

