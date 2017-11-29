
enum ViewType {
  GOODS = 0,
  MEMBER,
  NOCODE,
  NUMBER_CONFIRM,
}

/**
 * 分类item数据
 */
interface ICategoryItem {
  name: string,
  id: string,
  parentId: string,
  subCates: [{
    name: string,
    id: string,
    parentId: string
  }],
}

/**
 * 商品详情
 */
interface IGoodsItem {
  skuId?: string,
  spuId?: string,
  productName?: string,
  skuBn?: string,
  stock?: {
    status: boolean,
    name: string,
    stock: number,
  },
  salePrice: string,
  images: [string],
  isMaster?: string,
  groupId?: string,
  specs?: [
    {
      specialPropName: string,
      specialValName: string,
    }
  ],
  d2cSort?: string,
  d2COnSale?: boolean,
  unit: string;
}

/**
 * 购物车cartItem
 */
interface ICartItem {
  skuId: string,
  spuId: string,
  skuBn: string,
  productName: string,             //名称
  originalPrice: number,     //基础价格
  levelPrice: number,        //会员销售价格
  activityPrice: number,     //活动价格
  isNoCodeGoods: boolean,    //是否是无码商品
  isDiscount?: boolean,       //是否有折扣价
  isWeightGoods: boolean,    //是否称重商品
  img: string,
  quantity: number,           //数量 或者 重量
  barCode: string,
  //goodItem?: IGoodsItem,     //商品详情 暂时用不到 去掉
  unit: string;                //商品单位
  itemType: number,              //s商品类型
  specs?: [                     //规格
    {
      specialPropName: string,
      specialValName: string,
    }
  ],
  stock,
}

/**
 * 购物车
 */
interface ICart {
  member: string,          //
  memberInfo?: IMemberInfo,
  memberType?: number,       //0:散客 1.会员
  cartItems: [ICartItem],
  totalFee: number,           //总价
  totalCount: number,         //总数
}

/**
 * 会员信息
 */
interface IMemberInfo {
  integral?: number          // 积分
  levelId?: number          //会员等级id
  levelName?: string        //会员等级名称
  mobile?: string            //会员手机
  totalPayCash?: number      //会员总消费
  userId?: string           //会员id
  nickName: string
}

/**
 * 商品cartItem
 */
interface ICashCartItem {
  skuId?: string,
  spuId?: string,
  productName?: string,             //名称
  originalPrice?: number,     //基础价格
  levelPrice?: number,        //会员销售价格
  isNoCodeGoods?: boolean,    //是否是无码商品 
  itemType?: number,          // 1, "标准的自营商品" 3,"称重商品: 如按斤、毫升、米等度量单位卖出的商品" 4, "无条码商品"
  quantity?: number,           //数量 或者 重量 
}

/**
 * 提交订单
 */
interface ICashCart {
  userId: string,          //
  mobile: string,
  levelId: string,       //0:散客 1.会员
  nickName: string,
  items: [ICashCartItem],
  tid?: string,
  totalTradeCash?: number,
  totalCount?: number,
}

/**
 * 商品营销活动
 */
interface IGoodsActivity {
  openCut: number,
  openDiscount: number,
  cuts: [{ type: string, value: number }],
  discounts: [{ type: string, value: number }],
  cutType: {
    cutFen: number,
    cutJiao: number,
    cutRound: number,
  }
}


export {
  ViewType,
  ICategoryItem,
  IGoodsItem,
  ICartItem,
  ICart,
  IMemberInfo,
  ICashCart,
  ICashCartItem,
  IGoodsActivity,
};

