/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class NSArray, NSMutableArray;

@interface SKUIHorizontalLockupColumn : NSObject {
    NSMutableArray *_childViewElements;
    int _identifier;
    struct CGSize { 
        float width; 
        float height; 
    } _size;
}

@property(copy,readonly) NSArray * childViewElements;
@property int identifier;
@property struct CGSize { float x1; float x2; } size;

- (void).cxx_destruct;
- (void)_addChildViewElement:(id)arg1;
- (id)childViewElements;
- (id)description;
- (int)identifier;
- (id)init;
- (void)setIdentifier:(int)arg1;
- (void)setSize:(struct CGSize { float x1; float x2; })arg1;
- (struct CGSize { float x1; float x2; })size;

@end
