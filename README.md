# 언리얼 엔진 5: 게임플레이 어빌리티 시스템 (GAS) 기초 예제
언리얼 엔진 5의 Gameplay Ability System (GAS)을 활용한 간단한 기능 구현 예제입니다.
## 구현 내용
*   **GAS 기본 설정:** 프로젝트에 GAS 모듈을 추가하고 활성화합니다.
*   **캐릭터 연동:** 캐릭터에 `AbilitySystemComponent`를 추가하고 어빌리티를 부여합니다.
*   **기본 어빌리티 구현:** 입력에 따라 캐릭터의 점프 같은 간단한 어빌리티를 실행하는 방법을 다룹니다.

## GAS 핵심 3요소
*   **어트리뷰트 (Attributes):** 체력, 마나 등 캐릭터의 스탯
*   **어빌리티 (Abilities):** 캐릭터가 사용하는 스킬
*   **게임플레이 이펙트 (Gameplay Effects):** 버프/디버프 등 어트리뷰트를 변경하는 효과
