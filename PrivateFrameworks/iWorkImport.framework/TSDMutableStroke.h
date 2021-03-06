/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class TSDStrokePattern, TSUColor;

@interface TSDMutableStroke : TSDStroke {
}

@property float actualWidth;
@property int cap;
@property(copy) TSUColor * color;
@property BOOL dontClearBackground;
@property int join;
@property float miterLimit;
@property(copy) TSDStrokePattern * pattern;
@property float width;

+ (id)emptyStroke;
+ (id)stroke;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setDontClearBackground:(BOOL)arg1;
- (void)setPatternPropertiesFromStroke:(id)arg1;
- (void)setPropertiesFromStroke:(id)arg1;

@end
